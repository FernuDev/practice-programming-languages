// ===== REFERENCIAS Y PRÉSTAMOS (BORROWING) =====

fn main() {
    println!("\n===== REFERENCIAS INMUTABLES &T =====");

    let s1 = String::from("Hola");
    let len = calcular_longitud(&s1);  // Pasar referencia

    println!("'{}' tiene {} caracteres", s1, len);
    println!("s1 sigue siendo válido: {}", s1);

    println!("\n===== REFERENCIAS MUTABLES &mut T =====");

    let mut s2 = String::from("Hola");
    println!("Antes: {}", s2);

    cambiar_string(&mut s2);
    println!("Después: {}", s2);

    println!("\n===== REGLAS DE PRÉSTAMO =====");

    println!("1. Puedes tener muchas referencias inmutables");
    let s = String::from("Rust");
    let r1 = &s;
    let r2 = &s;
    let r3 = &s;

    println!("r1: {}, r2: {}, r3: {}", r1, r2, r3);

    println!("\n2. Solo UNA referencia mutable a la vez");

    let mut s4 = String::from("Hola");
    let r4 = &mut s4;
    println!("Referencia mutable: {}", r4);
    // let r5 = &mut s4;  // ERROR: no puedo haber 2 referencias mutables

    println!("\n===== NO MEZCLAR REFERENCIAS MUTABLES E INMUTABLES =====");

    let mut s5 = String::from("Hola");
    let r5 = &s5;      // Referencia inmutable
    let r6 = &s5;      // Referencia inmutable
    println!("r5: {}, r6: {}", r5, r6);

    // Aquí podemos agregar una referencia mutable
    // porque r5 y r6 ya no se usan después
    let r7 = &mut s5;
    println!("Referencia mutable: {}", r7);

    println!("\n===== LIFETIMES: ANOTACIONES DE VIDA =====");

    fn obtener_mayor<'a>(s1: &'a str, s2: &'a str) -> &'a str {
        if s1.len() > s2.len() {
            s1
        } else {
            s2
        }
    }

    let str1 = "Hola";
    let str2 = "Rust";
    let mayor = obtener_mayor(str1, str2);
    println!("La cadena más larga: {}", mayor);

    println!("\n===== PUNTEROS CRUDOS (UNSAFE) =====");

    let x = 5;
    let raw_ptr = &x as *const i32;

    unsafe {
        println!("Valor a través de puntero crudo: {}", *raw_ptr);
    }

    println!("\n===== STRUCT CON REFERENCIAS =====");

    struct Referencia<'a> {
        parte: &'a str,
    }

    let s6 = String::from("Primera parte y segunda parte");
    let palabras: Vec<&str> = s6.split(' ').collect();
    let referencia = Referencia {
        parte: palabras[0],
    };

    println!("Struct con referencia: {}", referencia.parte);

    println!("\n===== SLICE: REFERENCIA A PARTE DE COLECCIÓN =====");

    let s7 = String::from("Hola Mundo");
    let hola = &s7[0..4];      // Primeros 4 caracteres
    let mundo = &s7[5..10];    // Caracteres 5-9

    println!("'{}' y '{}'", hola, mundo);

    println!("\n===== SLICE DE ARRAY =====");

    let arr = [1, 2, 3, 4, 5];
    let slice = &arr[1..4];    // Elementos 1, 2, 3
    println!("Slice: {:?}", slice);

    println!("\n===== RESUMEN DE REFERENCIAS =====");

    println!("&T       - Referencia inmutable");
    println!("&mut T   - Referencia mutable");
    println!("'a       - Lifetime annotation");
    println!("Reglas:");
    println!("  - Muchas referencias inmutables: OK");
    println!("  - Una referencia mutable: OK");
    println!("  - Mezclar mutable + inmutable: NO");
    println!("Slices: referencias a parte de colección");
}

// Función que toma referencia
fn calcular_longitud(s: &String) -> usize {
    s.len()
}  // s sale del scope, pero no destruye String porque solo es referencia

// Función que modifica a través de referencia mutable
fn cambiar_string(s: &mut String) {
    s.push_str(" mundo");
}
