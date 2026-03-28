// ===== MANEJO DE ERRORES EN RUST =====

use std::fs::File;
use std::io::Read;

// Error personalizado
#[derive(Debug)]
enum MiError {
    ValorNegativo,
    DivisionPorCero,
    FuenteError(String),
}

impl std::fmt::Display for MiError {
    fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
        match self {
            MiError::ValorNegativo => write!(f, "El valor no puede ser negativo"),
            MiError::DivisionPorCero => write!(f, "No se puede dividir entre cero"),
            MiError::FuenteError(msg) => write!(f, "Error: {}", msg),
        }
    }
}

impl std::error::Error for MiError {}

fn main() {
    println!("\n===== OPTION: VALOR O AUSENCIA =====");

    fn dividir_seguro(a: i32, b: i32) -> Option<i32> {
        if b == 0 {
            None
        } else {
            Some(a / b)
        }
    }

    match dividir_seguro(10, 2) {
        Some(resultado) => println!("10 / 2 = {}", resultado),
        None => println!("No se puede dividir"),
    }

    match dividir_seguro(10, 0) {
        Some(resultado) => println!("10 / 0 = {}", resultado),
        None => println!("No se puede dividir entre cero"),
    }

    println!("\n===== MÉTODOS DE OPTION =====");

    let valor = Some(5);

    // is_some() e is_none()
    if valor.is_some() {
        println!("Hay un valor");
    }

    // unwrap() - panics si es None
    let numero = Some(42).unwrap();
    println!("Unwrap: {}", numero);

    // unwrap_or() - default si es None
    let numero2 = None::<i32>.unwrap_or(0);
    println!("Unwrap_or: {}", numero2);

    // map() - transformar
    let resultado = Some(5).map(|x| x * 2);
    println!("Some(5).map(|x| x * 2) = {:?}", resultado);

    // and_then() - encadenar
    let resultado = Some(3)
        .and_then(|x| if x > 2 { Some(x * 2) } else { None })
        .and_then(|x| Some(x + 1));
    println!("Encadenado: {:?}", resultado);

    println!("\n===== RESULT: OK O ERROR =====");

    fn validar_edad(edad: i32) -> Result<(), String> {
        if edad < 0 {
            Err("La edad no puede ser negativa".to_string())
        } else if edad < 18 {
            Err("Debes ser mayor de 18".to_string())
        } else {
            Ok(())
        }
    }

    match validar_edad(25) {
        Ok(()) => println!("Edad válida"),
        Err(error) => println!("Error: {}", error),
    }

    match validar_edad(-5) {
        Ok(()) => println!("Edad válida"),
        Err(error) => println!("Error: {}", error),
    }

    println!("\n===== MÉTODOS DE RESULT =====");

    let resultado: Result<i32, String> = Ok(42);

    // is_ok() e is_err()
    if resultado.is_ok() {
        println!("El resultado es exitoso");
    }

    // unwrap() - obtiene Ok o panic
    let valor = Ok(100).unwrap();
    println!("Unwrap: {}", valor);

    // unwrap_or() - default si es Err
    let valor2 = Err::<i32, String>("error".to_string()).unwrap_or(0);
    println!("Unwrap_or: {}", valor2);

    // map() - transformar
    let resultado = Ok(5).map(|x| x * 2);
    println!("Ok(5).map(|x| x * 2) = {:?}", resultado);

    println!("\n===== OPERADOR ? PARA PROPAGAR ERRORES =====");

    fn operacion() -> Result<i32, String> {
        let valor1 = dividir_con_error(10, 2)?;
        let valor2 = dividir_con_error(valor1, 0)?;
        Ok(valor2)
    }

    fn dividir_con_error(a: i32, b: i32) -> Result<i32, String> {
        if b == 0 {
            Err("División por cero".to_string())
        } else {
            Ok(a / b)
        }
    }

    match operacion() {
        Ok(v) => println!("Resultado: {}", v),
        Err(e) => println!("Error propagado: {}", e),
    }

    println!("\n===== ERRORES PERSONALIZADOS =====");

    fn procesar_valor(valor: i32) -> Result<i32, MiError> {
        if valor < 0 {
            Err(MiError::ValorNegativo)
        } else if valor == 0 {
            Err(MiError::DivisionPorCero)
        } else {
            Ok(100 / valor)
        }
    }

    match procesar_valor(10) {
        Ok(resultado) => println!("Resultado: {}", resultado),
        Err(error) => println!("Error: {}", error),
    }

    match procesar_valor(-5) {
        Ok(resultado) => println!("Resultado: {}", resultado),
        Err(error) => println!("Error: {}", error),
    }

    println!("\n===== IF LET CON RESULT =====");

    let resultado = Ok(42);

    if let Ok(valor) = resultado {
        println!("Valor extraído: {}", valor);
    }

    if let Err(error) = Err::<i32, String>("algo falló".to_string()) {
        println!("Error encontrado: {}", error);
    }

    println!("\n===== PANIC: CASOS IRRECUPERABLES =====");

    println!("Los panics deben usarse solo en casos irrecuperables");

    // Esto causaría panic:
    // let _x = None::<i32>.unwrap();  // panics!

    // Es mejor usar match o ?
    let valor = Some(5);
    if let Some(v) = valor {
        println!("Valor: {}", v);
    }

    println!("\n===== RESUMEN DE MANEJO DE ERRORES =====");

    println!("Option<T>: Some(valor) o None");
    println!("Result<T, E>: Ok(valor) o Err(error)");
    println!("? operator: propagar errores");
    println!("match: manejo exhaustivo");
    println!("if let: manejo simplificado");
    println!("Errores personalizados: impl Error trait");
    println!("unwrap(): obtener valor o panic");
    println!("unwrap_or(): obtener valor o default");
}
