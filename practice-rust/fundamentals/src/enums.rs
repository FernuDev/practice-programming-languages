// ===== ENUMERACIONES (ENUMS) =====

// Enum simple
enum Direccion {
    Norte,
    Sur,
    Este,
    Oeste,
}

// Enum con datos asociados
enum Mensaje {
    Quit,
    Mover { x: i32, y: i32 },
    Escribir(String),
    CambiarColor(i32, i32, i32),
}

impl Mensaje {
    fn procesar(&self) {
        match self {
            Mensaje::Quit => println!("Cerrando aplicación"),
            Mensaje::Mover { x, y } => println!("Moviendo a ({}, {})", x, y),
            Mensaje::Escribir(texto) => println!("Escribiendo: {}", texto),
            Mensaje::CambiarColor(r, g, b) => println!("Color RGB({}, {}, {})", r, g, b),
        }
    }
}

// Option: tipo muy importante en Rust
// enum Option<T> {
//     Some(T),
//     None,
// }

// Result: para manejo de errores
// enum Result<T, E> {
//     Ok(T),
//     Err(E),
// }

fn main() {
    println!("\n===== ENUM SIMPLE =====");

    let norte = Direccion::Norte;
    let sur = Direccion::Sur;

    match norte {
        Direccion::Norte => println!("Yendo al norte"),
        Direccion::Sur => println!("Yendo al sur"),
        Direccion::Este => println!("Yendo al este"),
        Direccion::Oeste => println!("Yendo al oeste"),
    }

    println!("\n===== ENUM CON DATOS ASOCIADOS =====");

    let mensaje1 = Mensaje::Escribir(String::from("Hola, Rust!"));
    let mensaje2 = Mensaje::Mover { x: 10, y: 20 };
    let mensaje3 = Mensaje::CambiarColor(255, 0, 0);
    let mensaje4 = Mensaje::Quit;

    mensaje1.procesar();
    mensaje2.procesar();
    mensaje3.procesar();
    mensaje4.procesar();

    println!("\n===== OPTION: VALOR O AUSENCIA =====");

    let numero = Some(5);
    let sin_valor: Option<i32> = None;

    match numero {
        Some(valor) => println!("Hay un valor: {}", valor),
        None => println!("No hay valor"),
    }

    match sin_valor {
        Some(valor) => println!("Hay un valor: {}", valor),
        None => println!("No hay valor"),
    }

    println!("\n===== OPTION CON MÉTODOS =====");

    let valor = Some(3);

    // is_some() y is_none()
    if valor.is_some() {
        println!("El valor existe");
    }

    // unwrap() - obtener valor o panic
    let numero_extraido = Some(42).unwrap();
    println!("Valor extraído: {}", numero_extraido);

    // unwrap_or() - obtener valor o default
    let valor_default = None::<i32>.unwrap_or(0);
    println!("Valor con default: {}", valor_default);

    // map() - transformar
    let resultado = Some(5).map(|x| x * 2);
    println!("Some(5).map(|x| x * 2) = {:?}", resultado);

    println!("\n===== RESULT: OK O ERROR =====");

    fn dividir(a: i32, b: i32) -> Result<i32, String> {
        if b == 0 {
            Err(String::from("No se puede dividir entre cero"))
        } else {
            Ok(a / b)
        }
    }

    match dividir(10, 2) {
        Ok(resultado) => println!("10 / 2 = {}", resultado),
        Err(error) => println!("Error: {}", error),
    }

    match dividir(10, 0) {
        Ok(resultado) => println!("10 / 0 = {}", resultado),
        Err(error) => println!("Error: {}", error),
    }

    println!("\n===== RESULT CON MÉTODOS =====");

    let resultado = Ok(42);

    if resultado.is_ok() {
        println!("El resultado es exitoso");
    }

    let valor_resultado = Ok(100).unwrap_or(0);
    println!("Valor del resultado: {}", valor_resultado);

    println!("\n===== OPERADOR ? PARA RESULT =====");

    fn operacion_segura() -> Result<i32, String> {
        let valor = dividir(10, 2)?;  // Si es Err, retorna inmediatamente
        Ok(valor + 5)
    }

    match operacion_segura() {
        Ok(v) => println!("Resultado final: {}", v),
        Err(e) => println!("Error: {}", e),
    }

    println!("\n===== IF LET CON ENUM =====");

    let config_maxima = Some(3u8);

    if let Some(max) = config_maxima {
        println!("Límite máximo: {}", max);
    }

    println!("\n===== PATTERN MATCHING CON ENUM =====");

    enum EstadoJuego {
        Jugando,
        Pausado,
        GameOver { puntos: u32 },
    }

    let estado = EstadoJuego::GameOver { puntos: 1000 };

    match estado {
        EstadoJuego::Jugando => println!("¡Jugando!"),
        EstadoJuego::Pausado => println!("Juego pausado"),
        EstadoJuego::GameOver { puntos } => println!("Fin del juego. Puntos: {}", puntos),
    }

    println!("\n===== RESUMEN DE ENUMS =====");

    println!("Enum: tipo que puede tener varios valores");
    println!("Option<T>: Some(valor) o None");
    println!("Result<T, E>: Ok(valor) o Err(error)");
    println!("Pattern matching: match expression");
    println!("if let: simplificar un match de una rama");
    println!("?: operador para propagar errores");
}
