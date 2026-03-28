// ===== CONTROL DE FLUJO EN RUST =====

fn main() {
    println!("\n===== IF / ELSE IF / ELSE =====");

    let calificacion = 85;
    println!("Calificación: {}", calificacion);

    if calificacion >= 90 {
        println!("Resultado: A (Excelente)");
    } else if calificacion >= 80 {
        println!("Resultado: B (Muy Bien)");
    } else if calificacion >= 70 {
        println!("Resultado: C (Bien)");
    } else {
        println!("Resultado: F (Reprobado)");
    }

    println!("\n===== IF COMO EXPRESIÓN =====");

    let numero = 6;
    let es_par = if numero % 2 == 0 { "par" } else { "impar" };
    println!("El número {} es {}", numero, es_par);

    let numero2 = 8;
    let resultado = if numero2 > 5 {
        numero2 + 10
    } else {
        numero2 - 10
    };
    println!("Resultado: {}", resultado);

    println!("\n===== MATCH (PATTERN MATCHING) =====");

    let dia = 3;
    println!("Día número: {}", dia);

    match dia {
        1 => println!("Lunes"),
        2 => println!("Martes"),
        3 => println!("Miércoles"),
        4 => println!("Jueves"),
        5 => println!("Viernes"),
        6 => println!("Sábado"),
        7 => println!("Domingo"),
        _ => println!("Día inválido"),
    }

    println!("\n===== MATCH CON RANGOS =====");

    let edad = 25;
    println!("Edad: {}", edad);

    match edad {
        0..=12 => println!("Eres un niño"),
        13..=19 => println!("Eres un adolescente"),
        20..=59 => println!("Eres un adulto"),
        60.. => println!("Eres un adulto mayor"),
    }

    println!("\n===== MATCH CON OPERACIONES =====");

    let nota = 'B';

    match nota {
        'A' => println!("Excelente"),
        'B' | 'C' => println!("Bueno"),
        'D' => println!("Aceptable"),
        'F' => println!("Reprobado"),
        _ => println!("Nota desconocida"),
    }

    println!("\n===== MATCH CON EXTRACCIÓN =====");

    let punto = (2, 3);

    match punto {
        (0, 0) => println!("En el origen"),
        (x, 0) => println!("En el eje X, x = {}", x),
        (0, y) => println!("En el eje Y, y = {}", y),
        (x, y) => println!("En el punto ({}, {})", x, y),
    }

    println!("\n===== IF LET (PATTERN ÚNICO) =====");

    let valor = Some(3);

    if let Some(x) = valor {
        println!("El valor es Some({})", x);
    } else {
        println!("No hay valor");
    }

    println!("\n===== CONDICIONALES COMPLEJAS =====");

    let x = 20;
    let y = 10;
    let z = 15;

    if x > y && y < z {
        println!("Condición AND verdadera: x > y AND y < z");
    }

    if x < y || y < z {
        println!("Condición OR verdadera: x < y OR y < z");
    }

    if !(x == y) {
        println!("Condición NOT verdadera: x NO es igual a y");
    }

    println!("\n===== MATCH CON GUARDIAS =====");

    let numero = 42;

    match numero {
        x if x < 0 => println!("Número negativo: {}", x),
        x if x == 0 => println!("Cero"),
        x if x > 0 && x < 10 => println!("Número pequeño: {}", x),
        x => println!("Número grande: {}", x),
    }

    println!("\n===== EXPRESIONES VS SENTENCIAS =====");

    // Sentencia: no retorna valor, termina con ;
    let x = 5;
    println!("Sentencia: x = {}", x);

    // Expresión: retorna valor, NO termina con ;
    let y = {
        let x = 3;
        x + 1  // Sin ; es expresión, retorna 4
    };
    println!("Expresión: y = {}", y);

    // Función que retorna expresión
    fn retorna_cinco() -> i32 {
        5  // Sin ;, es expresión
    }

    let resultado = retorna_cinco();
    println!("Función que retorna expresión: {}", resultado);

    println!("\n===== RESUMEN DE CONTROL DE FLUJO =====");

    println!("if/else if/else - condicional tradicional");
    println!("match - pattern matching potente");
    println!("if let - patrón único simplificado");
    println!("if let + else - alternativa a match de 2 ramas");
    println!("Guardias en match - condiciones adicionales");
    println!("Expresiones vs sentencias - diferencia clave en Rust");
}
