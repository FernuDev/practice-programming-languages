// ===== BUCLES EN RUST =====

fn main() {
    println!("\n===== BUCLE LOOP (INFINITO) =====");

    let mut contador = 0;
    loop {
        println!("Contador: {}", contador);
        contador += 1;

        if contador >= 3 {
            break;  // Salir del bucle
        }
    }

    println!("\n===== LOOP CON BREAK Y VALOR =====");

    let mut contador = 0;
    let resultado = loop {
        contador += 1;
        if contador == 5 {
            break contador * 2;  // Retornar valor
        }
    };
    println!("Resultado del loop: {}", resultado);

    println!("\n===== WHILE =====");

    let mut numero = 1;
    println!("Números impares hasta 10:");
    while numero <= 10 {
        if numero % 2 != 0 {
            print!("{} ", numero);
        }
        numero += 1;
    }
    println!();

    println!("\n===== FOR CON RANGO =====");

    println!("Números del 1 al 5:");
    for i in 1..=5 {
        print!("{} ", i);
    }
    println!();

    println!("Números del 1 al 4 (sin incluir 5):");
    for i in 1..5 {
        print!("{} ", i);
    }
    println!();

    println!("\n===== FOR CON ARRAY =====");

    let array = [10, 20, 30, 40, 50];
    println!("Elementos del array: ");
    for elemento in array {
        println!("  {}", elemento);
    }

    println!("\n===== FOR CON ÍNDICE =====");

    let valores = vec![100, 200, 300, 400];
    for (indice, valor) in valores.iter().enumerate() {
        println!("valores[{}] = {}", indice, valor);
    }

    println!("\n===== FOR CON MUTABLE REFERENCE =====");

    let mut numeros = vec![1, 2, 3, 4, 5];
    for numero in &mut numeros {
        *numero *= 2;  // Modificar cada elemento
    }
    println!("Números duplicados: {:?}", numeros);

    println!("\n===== BREAK Y CONTINUE =====");

    println!("Números del 1 al 10 (saltando pares):");
    for i in 1..=10 {
        if i % 2 == 0 {
            continue;  // Saltar a siguiente iteración
        }
        print!("{} ", i);
    }
    println!();

    println!("Números hasta encontrar 5:");
    for i in 1..=10 {
        print!("{} ", i);
        if i == 5 {
            break;  // Salir del bucle
        }
    }
    println!();

    println!("\n===== BUCLES ANIDADOS =====");

    println!("Tabla de multiplicar 3x3:");
    for i in 1..=3 {
        for j in 1..=3 {
            print!("({},{}) ", i, j);
        }
        println!();
    }

    println!("\n===== ETIQUETAS DE BUCLE =====");

    let mut contador = 0;
    'bucle_externo: loop {
        let mut contador_interno = 0;
        loop {
            contador_interno += 1;
            contador += 1;

            if contador_interno == 3 {
                break;  // Salir del bucle interno
            }

            if contador == 5 {
                break 'bucle_externo;  // Salir del bucle externo
            }
        }
    }
    println!("Contador final: {}", contador);

    println!("\n===== SUMA ACUMULATIVA =====");

    let mut suma = 0;
    for i in 1..=5 {
        suma += i;
        println!("Suma hasta {}: {}", i, suma);
    }

    println!("\n===== BÚSQUEDA CON BREAK =====");

    let numeros = vec![10, 20, 30, 40, 50];
    let buscado = 30;
    let mut encontrado = false;

    for numero in &numeros {
        if *numero == buscado {
            println!("Número {} encontrado", buscado);
            encontrado = true;
            break;
        }
    }

    if !encontrado {
        println!("Número {} no encontrado", buscado);
    }

    println!("\n===== ITERADORES (más Rust) =====");

    let numeros = vec![1, 2, 3, 4, 5];

    // using iter()
    println!("Con iter():");
    for num in numeros.iter() {
        print!("{} ", num);
    }
    println!();

    // usando into_iter() - consume el vector
    println!("Con into_iter():");
    let numeros2 = vec![10, 20, 30];
    for num in numeros2 {
        print!("{} ", num);
    }
    println!();

    println!("\n===== RESUMEN DE BUCLES =====");

    println!("loop - bucle infinito (con break)");
    println!("while - mientras la condición sea true");
    println!("for - iterar sobre colecciones o rangos");
    println!("for in range - 1..5 (sin incluir 5), 1..=5 (incluye 5)");
    println!("break - salir del bucle");
    println!("continue - saltar a la siguiente iteración");
    println!("Etiquetas - para controlar bucles anidados");
}
