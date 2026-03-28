// ===== SISTEMA DE PROPIEDAD (OWNERSHIP) =====

fn main() {
    println!("\n===== CONCEPTOS BÁSICOS DE PROPIEDAD =====");

    // String es propiedad (heap)
    let s1 = String::from("Hola");
    println!("s1 = {}", s1);

    // MOVE: transferir propiedad
    println!("\n===== MOVE (TRANSFERENCIA DE PROPIEDAD) =====");

    let s2 = String::from("Mundo");
    let s3 = s2;  // s2 se mueve a s3

    println!("s3 = {}", s3);
    // println!("s2 = {}", s2);  // ERROR: s2 ya no es dueño

    println!("\n===== COPY: TIPOS QUE IMPLEMENTAN COPY =====");

    // Los tipos simples (i32, f64, bool, etc.) implementan Copy
    // Se copian automáticamente en lugar de moverse
    let x = 5;
    let y = x;  // x se COPIA a y (no se mueve)

    println!("x = {}, y = {}", x, y);  // Ambos son válidos

    println!("\n===== FUNCIONES Y PROPIEDAD =====");

    fn tomar_string(s: String) {
        println!("Dentro de la función: {}", s);
    }

    let s4 = String::from("Ejemplo");
    tomar_string(s4);
    // println!("Fuera de la función: {}", s4);  // ERROR: propiedad transferida

    println!("\n===== RETORNAR PROPIEDAD =====");

    fn crear_string() -> String {
        String::from("Nuevo string")
    }

    let s5 = crear_string();
    println!("String creado por función: {}", s5);

    println!("\n===== PROPIEDAD CON TUPLAS =====");

    fn tomar_y_retornar(s: String) -> (String, usize) {
        let longitud = s.len();
        (s, longitud)
    }

    let s6 = String::from("Hola, Rust!");
    let (s7, len) = tomar_y_retornar(s6);
    println!("String: '{}', Longitud: {}", s7, len);

    println!("\n===== CLONE: COPIAR EXPLÍCITAMENTE =====");

    let s8 = String::from("Original");
    let s9 = s8.clone();  // Copiar explícitamente

    println!("s8 = {}", s8);
    println!("s9 = {}", s9);

    println!("\n===== TIPOS COPY COMUNES =====");

    let i = 42_i32;
    let j = i;
    println!("i = {}, j = {} (ambos válidos, i32 es Copy)", i, j);

    let b = true;
    let b2 = b;
    println!("b = {}, b2 = {} (ambos válidos, bool es Copy)", b, b2);

    let f = 3.14_f64;
    let f2 = f;
    println!("f = {}, f2 = {} (ambos válidos, f64 es Copy)", f, f2);

    println!("\n===== VECTOR: MOVE =====");

    let v1 = vec![1, 2, 3];
    let v2 = v1;  // Vector se mueve

    println!("v2 = {:?}", v2);
    // println!("v1 = {:?}", v1);  // ERROR: v1 ya no es dueño

    println!("\n===== VECTOR: CLONE =====");

    let v3 = vec![10, 20, 30];
    let v4 = v3.clone();  // Clonar explícitamente

    println!("v3 = {:?}", v3);
    println!("v4 = {:?}", v4);

    println!("\n===== SCOPE DE PROPIEDAD =====");

    {
        let s_scope = String::from("Dentro del scope");
        println!("s_scope dentro: {}", s_scope);
    }  // s_scope se destruye aquí

    // println!("s_scope fuera: {}", s_scope);  // ERROR: fuera de scope

    println!("\n===== STRUCT CON PROPIEDAD =====");

    struct Persona {
        nombre: String,
        edad: u32,
    }

    let persona = Persona {
        nombre: String::from("Juan"),
        edad: 30,
    };

    println!("Persona: {} tiene {} años", persona.nombre, persona.edad);
    // println!("nombre: {}", persona.nombre);  // ERROR si se movió

    println!("\n===== RESUMEN DE PROPIEDAD =====");

    println!("1. Cada valor tiene UN propietario");
    println!("2. MOVE: transferir propiedad (tipos complejos)");
    println!("3. COPY: copiar automáticamente (tipos simples)");
    println!("4. CLONE: copiar explícitamente");
    println!("5. Al salir del scope, el propietario destruye el valor");
    println!("6. Rust verifica esto en tiempo de compilación");
}
