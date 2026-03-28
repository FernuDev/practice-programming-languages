// ===== TIPOS PRIMITIVOS =====

fn main() {
    println!("\n===== TIPOS PRIMITIVOS =====");

    // Enteros sin signo: u8, u16, u32, u64, u128, usize
    let byte: u8 = 255;
    let entero: u32 = 42;
    let grande: u64 = 1000000;

    println!("u8 (0-255): {}", byte);
    println!("u32: {}", entero);
    println!("u64: {}", grande);

    // Enteros con signo: i8, i16, i32, i64, i128, isize
    let negativo: i32 = -50;
    let pequeño: i8 = -128;

    println!("i32: {}", negativo);
    println!("i8 (rango: -128 a 127): {}", pequeño);

    println!("\n===== PUNTO FLOTANTE =====");

    // f32, f64 - punto flotante
    let decimal: f32 = 3.14;
    let pi: f64 = 3.14159265;

    println!("f32: {}", decimal);
    println!("f64 (mayor precisión): {}", pi);

    println!("\n===== BOOLEANO Y CARÁCTER =====");

    // bool: true o false
    let activo: bool = true;
    let inactivo: bool = false;

    println!("bool verdadero: {}", activo);
    println!("bool falso: {}", inactivo);

    // char: un carácter Unicode de 4 bytes
    let inicial: char = 'R';
    let emoji: char = '🦀';

    println!("char: {}", inicial);
    println!("char Unicode: {}", emoji);

    println!("\n===== STRINGS =====");

    // String literal &str (referencia a string)
    let texto_estatico: &str = "Hola, Rust!";
    println!("&str: {}", texto_estatico);

    // String propiedad (heap)
    let texto_dinamico: String = String::from("String asignado");
    println!("String: {}", texto_dinamico);

    println!("\n===== INMUTABILIDAD =====");

    // Por defecto, las variables son inmutables
    let x = 5;
    println!("x = {}", x);
    // x = 6;  // ERROR: no se puede reasignar

    // Usar 'mut' para permitir mutabilidad
    let mut y = 10;
    println!("y antes: {}", y);
    y = 20;
    println!("y después: {}", y);

    println!("\n===== SHADOWING =====");

    // Shadowing: crear una nueva variable con el mismo nombre
    let numero = 5;
    println!("numero original: {}", numero);

    let numero = numero + 1; // Sombrea la variable anterior
    println!("numero después de shadowing: {}", numero);

    let numero = numero * 2;
    println!("numero después de otro shadowing: {}", numero);

    // Shadowing también permite cambiar tipo
    let numero = "Ahora soy un string";
    println!("numero como string: {}", numero);

    println!("\n===== INFERENCIA DE TIPOS =====");

    // Rust puede inferir el tipo
    let a = 42;        // i32 por defecto
    let b = 3.14;      // f64 por defecto
    let c = true;      // bool

    println!("a (inferido i32): {}", a);
    println!("b (inferido f64): {}", b);
    println!("c (inferido bool): {}", c);

    println!("\n===== TUPLAS =====");

    // Tupla: colección de valores de diferentes tipos
    let tupla: (i32, f64, char) = (42, 3.14, 'A');
    println!("tupla completa: {:?}", tupla);

    // Desempaquetado de tupla
    let (x, y, z) = tupla;
    println!("x: {}, y: {}, z: {}", x, y, z);

    // Acceso a elementos
    println!("tupla.0: {}", tupla.0);
    println!("tupla.1: {}", tupla.1);
    println!("tupla.2: {}", tupla.2);

    println!("\n===== ARRAYS =====");

    // Array: colección homogénea de tamaño fijo
    let array: [i32; 5] = [1, 2, 3, 4, 5];
    println!("array: {:?}", array);
    println!("primer elemento: {}", array[0]);
    println!("longitud: {}", array.len());

    // Array con todos los elementos iguales
    let ceros: [i32; 3] = [0; 3];
    println!("array de ceros: {:?}", ceros);

    println!("\n===== CONSTANTES =====");

    // Constantes: valores que no pueden cambiar
    const VELOCIDAD_LUZ: u32 = 299792458;
    const PI_APROXIMADO: f64 = 3.14159;

    println!("VELOCIDAD_LUZ: {} m/s", VELOCIDAD_LUZ);
    println!("PI_APROXIMADO: {}", PI_APROXIMADO);

    println!("\n===== RESUMEN DE TIPOS =====");

    println!("Enteros: u8, u16, u32, u64, u128, i8, i16, i32, i64, i128");
    println!("Punto flotante: f32, f64");
    println!("Booleano: bool");
    println!("Carácter: char (4 bytes Unicode)");
    println!("String: &str (referencia), String (propiedad)");
    println!("Tuplas: (tipo1, tipo2, ...)");
    println!("Arrays: [tipo; tamaño]");
    println!("\nRust es fuertemente tipado: el tipo se verifica en tiempo de compilación");
}
