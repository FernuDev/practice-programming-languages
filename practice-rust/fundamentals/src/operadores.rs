// ===== OPERADORES EN RUST =====

fn main() {
    println!("\n===== OPERADORES ARITMÉTICOS =====");

    let a = 15;
    let b = 4;

    println!("a = {}, b = {}", a, b);
    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    println!("a / b = {} (división entera)", a / b);
    println!("a % b = {} (residuo)", a % b);

    println!("\n===== OPERADORES DE COMPARACIÓN =====");

    println!("{} == {}: {}", a, b, a == b);
    println!("{} != {}: {}", a, b, a != b);
    println!("{} > {}: {}", a, b, a > b);
    println!("{} < {}: {}", a, b, a < b);
    println!("{} >= {}: {}", a, b, a >= b);
    println!("{} <= {}: {}", a, b, a <= b);

    println!("\n===== OPERADORES LÓGICOS =====");

    let x = true;
    let y = false;

    println!("{} && {} (AND): {}", x, y, x && y);
    println!("{} || {} (OR): {}", x, y, x || y);
    println!("!{} (NOT): {}", x, !x);
    println!("!{} (NOT): {}", y, !y);

    println!("\n===== OPERADORES DE ASIGNACIÓN =====");

    let mut numero = 10;
    println!("numero = {}", numero);

    numero += 5;
    println!("numero += 5: {}", numero);

    numero -= 3;
    println!("numero -= 3: {}", numero);

    numero *= 2;
    println!("numero *= 2: {}", numero);

    numero /= 4;
    println!("numero /= 4: {}", numero);

    numero %= 5;
    println!("numero %= 5: {}", numero);

    println!("\n===== OPERADORES BITWISE =====");

    let bits1 = 5;   // 0101 en binario
    let bits2 = 3;   // 0011 en binario

    println!("bits1 = {} (0101), bits2 = {} (0011)", bits1, bits2);
    println!("{} & {} (AND bitwise) = {}", bits1, bits2, bits1 & bits2);
    println!("{} | {} (OR bitwise) = {}", bits1, bits2, bits1 | bits2);
    println!("{} ^ {} (XOR bitwise) = {}", bits1, bits2, bits1 ^ bits2);
    println!("!{} (NOT bitwise) = {}", bits1, !bits1);
    println!("{} << 1 (desplazamiento izquierda) = {}", bits1, bits1 << 1);
    println!("{} >> 1 (desplazamiento derecha) = {}", bits1, bits1 >> 1);

    println!("\n===== OPERADOR TERNARIO (EXPRESIÓN IF) =====");

    let edad = 20;
    let es_mayor = if edad >= 18 { "es mayor" } else { "es menor" };
    println!("Una persona de {} años {}", edad, es_mayor);

    let mayor = if a > b { a } else { b };
    println!("El mayor entre {} y {} es: {}", a, b, mayor);

    println!("\n===== OPERADOR RANGE =====");

    // Rango inclusivo: 1..=5 incluye 5
    println!("Rango 1..=5:");
    for i in 1..=5 {
        print!("{} ", i);
    }
    println!();

    // Rango exclusivo: 1..5 no incluye 5
    println!("Rango 1..5:");
    for i in 1..5 {
        print!("{} ", i);
    }
    println!();

    println!("\n===== OPERADOR TYPE CAST (as) =====");

    let entero: i32 = 42;
    let flotante: f64 = entero as f64;
    println!("Convertir {} (i32) a f64: {}", entero, flotante);

    let valor: u8 = 255;
    let expandido: u32 = valor as u32;
    println!("Convertir {} (u8) a u32: {}", valor, expandido);

    println!("\n===== PRECEDENCIA DE OPERADORES =====");

    let resultado1 = 2 + 3 * 4;     // 2 + (3 * 4) = 14
    let resultado2 = (2 + 3) * 4;   // (2 + 3) * 4 = 20

    println!("2 + 3 * 4 = {} (multiplicación primero)", resultado1);
    println!("(2 + 3) * 4 = {} (paréntesis primero)", resultado2);

    println!("\n===== OPERADORES DE REFERENCIA =====");

    let x = 5;
    let referencia = &x;  // Crear referencia
    println!("x = {}", x);
    println!("referencia a x = {}", *referencia); // Desreferenciar

    let mut y = 10;
    let referencia_mutable = &mut y;
    *referencia_mutable = 20;
    println!("y después de modificar a través de &mut: {}", y);

    println!("\n===== RESUMEN DE OPERADORES =====");

    println!("Aritméticos: +, -, *, /, %");
    println!("Comparación: ==, !=, <, >, <=, >=");
    println!("Lógicos: &&, ||, !");
    println!("Bitwise: &, |, ^, !, <<, >>");
    println!("Asignación: =, +=, -=, *=, /=, %=");
    println!("Range: .., ..=");
    println!("Type cast: as");
    println!("Referencia: &, &mut, *");
}
