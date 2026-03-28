// ===== STRINGS EN RUST =====

fn main() {
    println!("\n===== &str VS STRING =====");

    // &str: string slice (referencia, stack o estático)
    let string_literal: &str = "Hola, Rust!";
    println!("String literal: {}", string_literal);

    // String: propiedad dinámica en heap
    let string_dinamico: String = String::from("Hola, Mundo!");
    println!("String dinámico: {}", string_dinamico);

    println!("\n===== CREANDO STRINGS =====");

    // From
    let s1 = String::from("Desde from");
    println!("s1: {}", s1);

    // to_string()
    let s2 = "Desde to_string".to_string();
    println!("s2: {}", s2);

    // format! macro
    let s3 = format!("Hola, {}!", "Rust");
    println!("s3: {}", s3);

    println!("\n===== CONCATENACIÓN =====");

    let mut s = String::from("Hola");

    // push: agregar carácter
    s.push(' ');
    println!("Después de push: {}", s);

    // push_str: agregar string
    s.push_str("Rust");
    println!("Después de push_str: {}", s);

    // + operator
    let s4 = String::from("Hola");
    let s5 = String::from(" Mundo");
    let s6 = s4 + &s5;
    println!("Concatenación con +: {}", s6);

    // format! macro
    let s7 = format!("{}{}", "Hola", " Rust");
    println!("Con format!: {}", s7);

    println!("\n===== LONGITUD Y CAPACIDAD =====");

    let s = String::from("Hola");
    println!("String: '{}'", s);
    println!("Longitud: {}", s.len());
    println!("Capacidad: {}", s.capacity());

    let mut s2 = String::with_capacity(10);
    s2.push_str("Hola");
    println!("\nString con capacidad 10");
    println!("Contenido: '{}'", s2);
    println!("Longitud: {}", s2.len());
    println!("Capacidad: {}", s2.capacity());

    println!("\n===== ACCESO A CARACTERES =====");

    let s = String::from("Hola");

    // Iteración
    println!("Caracteres:");
    for c in s.chars() {
        println!("  {}", c);
    }

    // Acceso por índice de bytes
    println!("Bytes:");
    for b in s.bytes() {
        println!("  {}", b);
    }

    println!("\n===== SLICES DE STRING =====");

    let s = String::from("Hola, Rust!");
    let parte1 = &s[0..4];      // "Hola"
    let parte2 = &s[6..10];     // "Rust"

    println!("Original: {}", s);
    println!("Primeros 4 chars: {}", parte1);
    println!("Chars 6-10: {}", parte2);

    println!("\n===== MÉTODOS DE STRING =====");

    let s = String::from("Hola, Rust!, Hola");

    // contains
    if s.contains("Rust") {
        println!("Contiene 'Rust'");
    }

    // starts_with
    if s.starts_with("Hola") {
        println!("Comienza con 'Hola'");
    }

    // ends_with
    if s.ends_with("Hola") {
        println!("Termina con 'Hola'");
    }

    // replace
    let reemplazado = s.replace("Hola", "Adiós");
    println!("Reemplazado: {}", reemplazado);

    // split
    let palabras: Vec<&str> = s.split(", ").collect();
    println!("Split por ', ': {:?}", palabras);

    // trim
    let con_espacios = "  Texto con espacios  ";
    println!("Original: '{}', Trim: '{}'", con_espacios, con_espacios.trim());

    println!("\n===== CONVERSIÓN DE CASOS =====");

    let s = String::from("HoLa RuSt");
    println!("Original: {}", s);
    println!("Minúsculas: {}", s.to_lowercase());
    println!("Mayúsculas: {}", s.to_uppercase());

    println!("\n===== BÚSQUEDA =====");

    let s = String::from("Hola, Rust!, Hola");

    // find
    if let Some(pos) = s.find("Rust") {
        println!("'Rust' encontrado en posición: {}", pos);
    }

    // rfind (desde el final)
    if let Some(pos) = s.rfind("Hola") {
        println!("'Hola' (último) encontrado en posición: {}", pos);
    }

    println!("\n===== CONVERSIÓN A NÚMEROS =====");

    let s = "42";
    let numero: i32 = s.parse().unwrap();
    println!("'{}' como número: {}", s, numero);

    let s2 = "3.14";
    let decimal: f64 = s2.parse().unwrap();
    println!("'{}' como decimal: {}", s2, decimal);

    println!("\n===== INTERPOLACIÓN CON format! =====");

    let nombre = "Juan";
    let edad = 30;
    let mensaje = format!("{} tiene {} años", nombre, edad);
    println!("{}", mensaje);

    println!("\n===== RESUMEN DE STRINGS =====");

    println!("&str: string slice (referencia, immutable)");
    println!("String: propiedad dinámica (mutable, heap)");
    println!("Métodos: len(), chars(), bytes(), contains(), split()");
    println!("Concatenación: +, format!, push_str()");
    println!("Búsqueda: find(), rfind(), contains()");
    println!("Conversión: parse(), to_string(), to_lowercase()");
}
