// ===== ESTRUCTURAS (STRUCTS) =====

// Struct simple
struct Persona {
    nombre: String,
    edad: u32,
    altura: f64,
}

// Struct con métodos
impl Persona {
    fn new(nombre: String, edad: u32, altura: f64) -> Persona {
        Persona { nombre, edad, altura }
    }

    fn presentarse(&self) {
        println!("Hola, soy {} y tengo {} años", self.nombre, self.edad);
    }

    fn crecer(&mut self, cm: f64) {
        self.altura += cm;
    }

    fn es_mayor_de_edad(&self) -> bool {
        self.edad >= 18
    }

    fn cumpleaños(&mut self) {
        self.edad += 1;
    }
}

// Struct con genéricos
struct Contenedor<T> {
    valor: T,
}

impl<T> Contenedor<T> {
    fn obtener(&self) -> &T {
        &self.valor
    }
}

// Tuple struct
struct Color(u8, u8, u8);

// Unit struct (sin campos)
struct Marcador;

fn main() {
    println!("\n===== DEFINICIÓN BÁSICA DE STRUCT =====");

    let persona1 = Persona {
        nombre: String::from("Juan"),
        edad: 30,
        altura: 1.75,
    };

    println!("Persona: {}, {} años, {:.2}m",
             persona1.nombre, persona1.edad, persona1.altura);

    println!("\n===== STRUCT CON CONSTRUCTOR =====");

    let persona2 = Persona::new(String::from("María"), 28, 1.68);
    persona2.presentarse();

    println!("\n===== MÉTODOS CON &self =====");

    if persona2.es_mayor_de_edad() {
        println!("{} es mayor de edad", persona2.nombre);
    }

    println!("\n===== MÉTODOS CON &mut self =====");

    let mut persona3 = Persona::new(String::from("Carlos"), 17, 1.70);
    println!("Edad: {}", persona3.edad);

    persona3.cumpleaños();
    println!("Después de cumpleaños: {}", persona3.edad);

    persona3.crecer(5.0);
    println!("Después de crecer: {:.2}m", persona3.altura);

    println!("\n===== MÉTODOS CON CONSUMO (self) =====");

    struct Archivo {
        nombre: String,
    }

    impl Archivo {
        fn abrir(nombre: String) -> Archivo {
            println!("Abriendo archivo: {}", nombre);
            Archivo { nombre }
        }

        fn cerrar(self) {  // Consume el struct
            println!("Cerrando archivo: {}", self.nombre);
        }
    }

    let archivo = Archivo::abrir(String::from("datos.txt"));
    archivo.cerrar();
    // println!("{:?}", archivo);  // ERROR: archivo fue consumido

    println!("\n===== DESTRUCTURING (DESEMPAQUETADO) =====");

    let persona4 = Persona::new(String::from("Ana"), 25, 1.60);
    let Persona { nombre, edad, altura } = persona4;

    println!("Nombre: {}, Edad: {}, Altura: {}", nombre, edad, altura);

    println!("\n===== STRUCT CON GENÉRICOS =====");

    let contenedor_int = Contenedor { valor: 42 };
    let contenedor_str = Contenedor { valor: "Hola" };

    println!("Contenedor int: {}", contenedor_int.obtener());
    println!("Contenedor str: {}", contenedor_str.obtener());

    println!("\n===== TUPLE STRUCT =====");

    let color_rojo = Color(255, 0, 0);
    let color_verde = Color(0, 255, 0);

    println!("Rojo: RGB({}, {}, {})", color_rojo.0, color_rojo.1, color_rojo.2);
    println!("Verde: RGB({}, {}, {})", color_verde.0, color_verde.1, color_verde.2);

    println!("\n===== UNIT STRUCT =====");

    let _marcador = Marcador;
    println!("Unit struct creado (sin datos)");

    println!("\n===== STRUCT ANIDADO =====");

    struct Dirección {
        calle: String,
        ciudad: String,
    }

    struct PersonaConDirección {
        nombre: String,
        dirección: Dirección,
    }

    let persona_con_dir = PersonaConDirección {
        nombre: String::from("Pedro"),
        dirección: Dirección {
            calle: String::from("Calle Principal 123"),
            ciudad: String::from("Madrid"),
        },
    };

    println!("{} vive en {} - {}",
             persona_con_dir.nombre,
             persona_con_dir.dirección.calle,
             persona_con_dir.dirección.ciudad);

    println!("\n===== STRUCT CON VALORES POR DEFECTO =====");

    struct Configuración {
        puerto: u16,
        timeout: u32,
        debug: bool,
    }

    // Usando syntax de spread ..
    let config_base = Configuración {
        puerto: 8080,
        timeout: 30,
        debug: true,
    };

    let config_nueva = Configuración {
        puerto: 9000,
        ..config_base  // Copiar el resto de campos
    };

    println!("Config base: puerto {}", config_base.puerto);
    println!("Config nueva: puerto {}, timeout {}",
             config_nueva.puerto, config_nueva.timeout);

    println!("\n===== RESUMEN DE STRUCTS =====");

    println!("Struct: agrupación de datos");
    println!("impl: implementar métodos");
    println!("&self: método que toma prestado");
    println!("&mut self: método que modifica");
    println!("self: método que consume");
    println!("Genéricos: <T> para tipos parametrizados");
}
