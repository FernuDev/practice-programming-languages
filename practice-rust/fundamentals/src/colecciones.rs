// ===== COLECCIONES EN RUST =====

use std::collections::HashMap;

fn main() {
    println!("\n===== VECTOR =====");

    // Crear vector
    let mut numeros = vec![1, 2, 3, 4, 5];
    println!("Vector: {:?}", numeros);

    // push: agregar elemento
    numeros.push(6);
    println!("Después de push(6): {:?}", numeros);

    // pop: remover último
    numeros.pop();
    println!("Después de pop(): {:?}", numeros);

    // len y capacity
    println!("Longitud: {}, Capacidad: {}", numeros.len(), numeros.capacity());

    // Acceso
    println!("Primer elemento: {}", numeros[0]);
    println!("Último elemento: {}", numeros[numeros.len() - 1]);

    // Iteración
    println!("Iteración:");
    for (i, valor) in numeros.iter().enumerate() {
        println!("  [{}] = {}", i, valor);
    }

    println!("\n===== MAP (DICCIONARIO) =====");

    let mut capitales = HashMap::new();
    capitales.insert("España", "Madrid");
    capitales.insert("Francia", "París");
    capitales.insert("Italia", "Roma");

    println!("Capitales: {:?}", capitales);

    // Acceso
    match capitales.get("España") {
        Some(capital) => println!("Capital de España: {}", capital),
        None => println!("No encontrado"),
    }

    // contains_key
    if capitales.contains_key("Francia") {
        println!("Francia está en el mapa");
    }

    // Iteración
    println!("Todas las capitales:");
    for (pais, capital) in &capitales {
        println!("  {} -> {}", pais, capital);
    }

    // remove
    capitales.remove("Italia");
    println!("Después de remover Italia: {:?}", capitales);

    println!("\n===== OPERACIONES CON VECTORES =====");

    let v = vec![1, 2, 3, 4, 5];

    // map: transformar
    let duplicados: Vec<i32> = v.iter().map(|x| x * 2).collect();
    println!("Originales: {:?}", v);
    println!("Duplicados: {:?}", duplicados);

    // filter: seleccionar
    let pares: Vec<&i32> = v.iter().filter(|x| *x % 2 == 0).collect();
    println!("Pares: {:?}", pares);

    // fold: acumular
    let suma: i32 = v.iter().fold(0, |acc, x| acc + x);
    println!("Suma: {}", suma);

    // find: buscar
    let encontrado = v.iter().find(|x| **x == 3);
    println!("Buscado 3: {:?}", encontrado);

    // sort
    let mut numeros = vec![3, 1, 4, 1, 5, 9, 2, 6];
    numeros.sort();
    println!("Ordenado: {:?}", numeros);

    println!("\n===== VECTOR DE STRUCTS =====");

    struct Persona {
        nombre: String,
        edad: u32,
    }

    let personas = vec![
        Persona { nombre: String::from("Juan"), edad: 30 },
        Persona { nombre: String::from("María"), edad: 28 },
        Persona { nombre: String::from("Carlos"), edad: 35 },
    ];

    for persona in &personas {
        println!("Persona: {} ({} años)", persona.nombre, persona.edad);
    }

    println!("\n===== VECTOR DE TUPLAS =====");

    let datos: Vec<(i32, String)> = vec![
        (1, String::from("uno")),
        (2, String::from("dos")),
        (3, String::from("tres")),
    ];

    for (numero, texto) in &datos {
        println!("{}: {}", numero, texto);
    }

    println!("\n===== DEQUE (DOUBLE-ENDED QUEUE) =====");

    use std::collections::VecDeque;

    let mut cola = VecDeque::new();
    cola.push_back(1);
    cola.push_back(2);
    cola.push_back(3);

    cola.push_front(0);  // Agregar al frente
    println!("Deque: {:?}", cola);

    println!("Pop front: {:?}", cola.pop_front());
    println!("Pop back: {:?}", cola.pop_back());

    println!("\n===== SET (HASHSET) =====");

    use std::collections::HashSet;

    let mut conjunto = HashSet::new();
    conjunto.insert(1);
    conjunto.insert(2);
    conjunto.insert(3);
    conjunto.insert(2);  // Duplicado, no se agrega

    println!("Conjunto: {:?}", conjunto);
    println!("Tamaño: {}", conjunto.len());

    if conjunto.contains(&2) {
        println!("Contiene 2");
    }

    println!("\n===== OPERACIONES DE SET =====");

    let set1: HashSet<i32> = vec![1, 2, 3].into_iter().collect();
    let set2: HashSet<i32> = vec![2, 3, 4].into_iter().collect();

    // Intersección
    let interseccion: HashSet<i32> = set1.intersection(&set2).copied().collect();
    println!("Intersección: {:?}", interseccion);

    // Unión
    let union: HashSet<i32> = set1.union(&set2).copied().collect();
    println!("Unión: {:?}", union);

    // Diferencia
    let diferencia: HashSet<i32> = set1.difference(&set2).copied().collect();
    println!("Diferencia (set1 - set2): {:?}", diferencia);

    println!("\n===== RESUMEN DE COLECCIONES =====");

    println!("Vec<T>: vector dinámico");
    println!("HashMap<K, V>: diccionario");
    println!("HashSet<T>: conjunto sin duplicados");
    println!("VecDeque<T>: cola de dos extremos");
    println!("Iteradores: iter(), iter_mut(), into_iter()");
    println!("Funcionales: map(), filter(), fold(), find()");
}
