// ===== FUNCIONES EN RUST =====

// Función simple sin parámetros
fn saludar() {
    println!("¡Hola! Esta es una función sin parámetros");
}

// Función con parámetros
fn sumar(a: i32, b: i32) -> i32 {
    a + b  // Expresión, sin ;
}

// Función que no retorna valor
fn imprimir_resultado(resultado: i32) {
    println!("El resultado es: {}", resultado);
}

// Función que retorna múltiples valores (tupla)
fn dividir_y_residuo(dividendo: i32, divisor: i32) -> (i32, i32) {
    (dividendo / divisor, dividendo % divisor)
}

// Función con parámetros por referencia
fn modificar_por_referencia(valor: &mut i32) {
    *valor += 10;
}

// Función recursiva: factorial
fn factorial(n: u32) -> u32 {
    if n <= 1 {
        1
    } else {
        n * factorial(n - 1)
    }
}

// Función que retorna Result
fn dividir_seguro(dividendo: i32, divisor: i32) -> Result<i32, String> {
    if divisor == 0 {
        Err("No se puede dividir entre cero".to_string())
    } else {
        Ok(dividendo / divisor)
    }
}

fn main() {
    println!("\n===== FUNCIONES SIMPLES =====");

    saludar();

    let resultado = sumar(10, 20);
    imprimir_resultado(resultado);

    println!("\n===== FUNCIONES CON MÚLTIPLES PARÁMETROS =====");

    let suma = sumar(15, 25);
    println!("Suma de 15 + 25 = {}", suma);

    println!("\n===== RETORNO DE TUPLAS =====");

    let (cociente, residuo) = dividir_y_residuo(17, 5);
    println!("17 / 5 = {} con residuo {}", cociente, residuo);

    println!("\n===== PARÁMETROS POR REFERENCIA =====");

    let mut numero = 5;
    println!("Número antes: {}", numero);
    modificar_por_referencia(&mut numero);
    println!("Número después: {}", numero);

    println!("\n===== RECURSIÓN: FACTORIAL =====");

    for i in 1..=6 {
        println!("{}! = {}", i, factorial(i));
    }

    println!("\n===== FUNCIONES QUE RETORNAN RESULT =====");

    match dividir_seguro(10, 2) {
        Ok(resultado) => println!("10 / 2 = {}", resultado),
        Err(error) => println!("Error: {}", error),
    }

    match dividir_seguro(10, 0) {
        Ok(resultado) => println!("10 / 0 = {}", resultado),
        Err(error) => println!("Error: {}", error),
    }

    println!("\n===== CLOSURES (FUNCIONES ANÓNIMAS) =====");

    // Closure simple
    let sumar_uno = |x| x + 1;
    println!("Closure sumar_uno(5) = {}", sumar_uno(5));

    // Closure con tipos explícitos
    let multiplicar: fn(i32, i32) -> i32 = |a, b| a * b;
    println!("Closure multiplicar(3, 4) = {}", multiplicar(3, 4));

    // Closure que captura variables
    let y = 10;
    let sumar_y = |x| x + y;
    println!("Closure que captura y: sumar_y(5) = {}", sumar_y(5));

    println!("\n===== CLOSURES CON ITERADORES =====");

    let numeros = vec![1, 2, 3, 4, 5];

    // map: transformar cada elemento
    let duplicados: Vec<i32> = numeros.iter().map(|x| x * 2).collect();
    println!("Números duplicados: {:?}", duplicados);

    // filter: seleccionar elementos
    let pares: Vec<&i32> = numeros.iter().filter(|x| *x % 2 == 0).collect();
    println!("Números pares: {:?}", pares);

    // fold: acumular valores
    let suma_total: i32 = numeros.iter().fold(0, |acc, x| acc + x);
    println!("Suma total: {}", suma_total);

    println!("\n===== SCOPE DE FUNCIONES =====");

    {
        let variable_local = 50;
        println!("Dentro del bloque: variable_local = {}", variable_local);
    }

    // println!("Fuera del bloque: variable_local = {}", variable_local);  // ERROR

    println!("\n===== EARLY RETURN =====");

    fn buscar_mayor(numeros: Vec<i32>) -> Option<i32> {
        if numeros.is_empty() {
            return None;  // Retorno temprano
        }

        let mut mayor = numeros[0];
        for num in numeros {
            if num > mayor {
                mayor = num;
            }
        }

        Some(mayor)
    }

    let valores = vec![3, 7, 2, 9, 1];
    match buscar_mayor(valores) {
        Some(mayor) => println!("El mayor es: {}", mayor),
        None => println!("Lista vacía"),
    }

    println!("\n===== RESUMEN DE FUNCIONES =====");

    println!("fn nombre(parámetro: tipo) -> tipo_retorno {{ }}");
    println!("Closures: |parámetro| expresión");
    println!("Result<T, E>: para errores");
    println!("Option<T>: para valores que pueden no existir");
    println!("Iteradores: map, filter, fold, etc.");
}
