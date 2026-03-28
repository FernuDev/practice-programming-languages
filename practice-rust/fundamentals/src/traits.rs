// ===== TRAITS EN RUST =====

// Trait simple
trait Dibujable {
    fn dibujar(&self);
}

trait Area {
    fn calcular_area(&self) -> f64;
}

// Struct que implementa traits
struct Círculo {
    radio: f64,
}

impl Dibujable for Círculo {
    fn dibujar(&self) {
        println!("Dibujando círculo con radio {}", self.radio);
    }
}

impl Area for Círculo {
    fn calcular_area(&self) -> f64 {
        std::f64::consts::PI * self.radio * self.radio
    }
}

struct Rectángulo {
    ancho: f64,
    alto: f64,
}

impl Dibujable for Rectángulo {
    fn dibujar(&self) {
        println!("Dibujando rectángulo {}x{}", self.ancho, self.alto);
    }
}

impl Area for Rectángulo {
    fn calcular_area(&self) -> f64 {
        self.ancho * self.alto
    }
}

// Trait con implementación por defecto
trait Describible {
    fn describir(&self) -> String {
        "Sin descripción".to_string()
    }
}

impl Describible for Círculo {
    fn describir(&self) -> String {
        format!("Círculo con radio {}", self.radio)
    }
}

// Trait bounds
fn imprimir_area<T: Area>(figura: &T) {
    println!("Área: {:.2}", figura.calcular_area());
}

fn imprimir_dibujable<T: Dibujable>(figura: &T) {
    figura.dibujar();
}

fn imprimir_ambos<T: Dibujable + Area>(figura: &T) {
    figura.dibujar();
    println!("Área: {:.2}", figura.calcular_area());
}

// Trait con tipo asociado
trait Convertible {
    type Salida;

    fn convertir(&self) -> Self::Salida;
}

impl Convertible for Círculo {
    type Salida = String;

    fn convertir(&self) -> String {
        format!("Círculo(radio: {})", self.radio)
    }
}

// Trait genérico
trait Contenedor<T> {
    fn obtener(&self) -> &T;
    fn establecer(&mut self, valor: T);
}

struct Caja<T> {
    valor: T,
}

impl<T> Contenedor<T> for Caja<T> {
    fn obtener(&self) -> &T {
        &self.valor
    }

    fn establecer(&mut self, valor: T) {
        self.valor = valor;
    }
}

fn main() {
    println!("\n===== IMPLEMENTACIÓN DE TRAITS =====");

    let círculo = Círculo { radio: 5.0 };
    let rectángulo = Rectángulo { ancho: 4.0, alto: 6.0 };

    círculo.dibujar();
    rectángulo.dibujar();

    println!("\n===== MÚLTIPLES TRAITS =====");

    println!("Círculo:");
    imprimir_dibujable(&círculo);
    imprimir_area(&círculo);

    println!("\nRectángulo:");
    imprimir_dibujable(&rectángulo);
    imprimir_area(&rectángulo);

    println!("\n===== TRAIT BOUNDS (MÚLTIPLES) =====");

    println!("Figura con ambos traits:");
    imprimir_ambos(&círculo);

    println!("\n===== IMPLEMENTACIÓN POR DEFECTO =====");

    println!("Descripción de círculo: {}", círculo.describir());

    struct Triángulo;
    impl Describible for Triángulo {}

    println!("Descripción de triángulo: {}", Triángulo.describir());

    println!("\n===== TIPOS ASOCIADOS =====");

    let círculo = Círculo { radio: 3.5 };
    let resultado: String = círculo.convertir();
    println!("Convertido: {}", resultado);

    println!("\n===== TRAIT GENÉRICO =====");

    let mut caja_i32 = Caja { valor: 42 };
    println!("Caja int: {}", caja_i32.obtener());

    caja_i32.establecer(100);
    println!("Después de establecer: {}", caja_i32.obtener());

    let mut caja_str = Caja { valor: "Hola" };
    println!("Caja string: {}", caja_str.obtener());

    println!("\n===== TRAIT OBJECTS =====");

    let figuras: Vec<Box<dyn Area>> = vec![
        Box::new(Círculo { radio: 2.0 }),
        Box::new(Rectángulo { ancho: 3.0, alto: 4.0 }),
    ];

    println!("Áreas de figuras:");
    for figura in &figuras {
        println!("Área: {:.2}", figura.calcular_area());
    }

    println!("\n===== TRAIT CLONE =====");

    let círculo1 = Círculo { radio: 5.0 };
    // Los tipos con #[derive(Clone)] pueden clonar automáticamente

    println!("\n===== TRAIT ITERABLE (FOR LOOP) =====");

    struct NumerosPares {
        max: i32,
    }

    impl Iterator for NumerosPares {
        type Item = i32;

        fn next(&mut self) -> Option<i32> {
            if self.max <= 0 {
                None
            } else {
                let resultado = self.max;
                self.max -= 2;
                Some(resultado)
            }
        }
    }

    let mut pares = NumerosPares { max: 10 };
    println!("Pares del 10 al 2:");
    while let Some(n) = pares.next() {
        print!("{} ", n);
    }
    println!();

    println!("\n===== TRAIT BOUNDS CON GENÉRICOS =====");

    trait Mostrable {
        fn mostrar(&self);
    }

    impl Mostrable for i32 {
        fn mostrar(&self) {
            println!("Número: {}", self);
        }
    }

    impl Mostrable for String {
        fn mostrar(&self) {
            println!("Texto: {}", self);
        }
    }

    fn procesar<T: Mostrable>(valor: &T) {
        valor.mostrar();
    }

    procesar(&42);
    procesar(&String::from("Hola"));

    println!("\n===== RESUMEN DE TRAITS =====");

    println!("Trait: define comportamiento compartido");
    println!("impl: implementar trait para tipo");
    println!("Trait bounds: restricciones con <T: Trait>");
    println!("Múltiples traits: <T: Trait1 + Trait2>");
    println!("Tipos asociados: type X");
    println!("Trait objects: Box<dyn Trait>");
    println!("Implementación por defecto: métodos en trait");
}
