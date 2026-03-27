import java.util.*;

public class Colecciones {
    public static void main(String[] args) {

        // ===== ARRAYLIST =====

        System.out.println("===== ARRAYLIST =====\n");

        // crear ArrayList de strings
        ArrayList<String> frutas = new ArrayList<>();

        // agregar elementos con add()
        frutas.add("Manzana");
        frutas.add("Banana");
        frutas.add("Naranja");
        frutas.add("Mango");

        System.out.println("Frutas: " + frutas);
        System.out.println("Cantidad: " + frutas.size());

        // obtener un elemento específico con get()
        System.out.println("Primera fruta: " + frutas.get(0));
        System.out.println("Última fruta: " + frutas.get(frutas.size() - 1));

        // verificar si contiene un elemento
        System.out.println("¿Contiene Banana? " + frutas.contains("Banana"));
        System.out.println("¿Contiene Limón? " + frutas.contains("Limón"));

        // eliminar elemento con remove()
        frutas.remove("Banana");
        System.out.println("Después de eliminar Banana: " + frutas);

        // recorrer ArrayList con for-each
        System.out.println("Recorrido con for-each:");
        for (String fruta : frutas) {
            System.out.println("  - " + fruta);
        }

        // ===== HASHMAP =====

        System.out.println("\n===== HASHMAP =====\n");

        // crear HashMap de <clave, valor>
        HashMap<String, Integer> edades = new HashMap<>();

        // agregar elementos con put()
        edades.put("Juan", 28);
        edades.put("María", 25);
        edades.put("Carlos", 35);
        edades.put("Diana", 22);

        System.out.println("Mapa de edades: " + edades);

        // obtener valor por clave con get()
        System.out.println("Edad de Juan: " + edades.get("Juan"));
        System.out.println("Edad de María: " + edades.get("María"));

        // verificar si contiene clave
        System.out.println("¿Contiene a Pedro? " + edades.containsKey("Pedro"));
        System.out.println("¿Contiene a Juan? " + edades.containsKey("Juan"));

        // verificar si contiene valor
        System.out.println("¿Alguien tiene 25 años? " + edades.containsValue(25));

        // recorrer HashMap
        System.out.println("Recorrido del HashMap:");
        for (String nombre : edades.keySet()) {
            System.out.println("  " + nombre + ": " + edades.get(nombre) + " años");
        }

        // ===== HASHSET =====

        System.out.println("\n===== HASHSET =====\n");

        // crear HashSet (conjunto sin elementos duplicados)
        HashSet<String> colores = new HashSet<>();

        // agregar elementos
        colores.add("Rojo");
        colores.add("Azul");
        colores.add("Verde");
        colores.add("Amarillo");
        colores.add("Rojo"); // intenta agregar Rojo nuevamente

        System.out.println("Colores: " + colores);
        System.out.println("Cantidad: " + colores.size()); // solo 4 elementos (no hay duplicados)

        // verificar si contiene
        System.out.println("¿Contiene Azul? " + colores.contains("Azul"));
        System.out.println("¿Contiene Naranja? " + colores.contains("Naranja"));

        // eliminar
        colores.remove("Verde");
        System.out.println("Después de eliminar Verde: " + colores);

        // ===== LINKEDLIST =====

        System.out.println("\n===== LINKEDLIST =====\n");

        // LinkedList es más eficiente para inserciones y eliminaciones
        LinkedList<Integer> numeros = new LinkedList<>();

        numeros.add(10);
        numeros.add(20);
        numeros.add(30);
        numeros.add(40);

        System.out.println("LinkedList: " + numeros);

        // agregar al inicio y al final
        numeros.addFirst(5);
        numeros.addLast(50);
        System.out.println("Después de agregar al inicio y final: " + numeros);

        // obtener primer y último elemento
        System.out.println("Primer elemento: " + numeros.getFirst());
        System.out.println("Último elemento: " + numeros.getLast());

        // eliminar primer y último
        numeros.removeFirst();
        numeros.removeLast();
        System.out.println("Después de eliminar primero y último: " + numeros);

        // ===== GENERICS Y COLECCIONES =====

        System.out.println("\n===== GENERICS Y COLECCIONES =====\n");

        // ArrayList con números
        ArrayList<Integer> numeros2 = new ArrayList<>();
        numeros2.add(100);
        numeros2.add(200);
        numeros2.add(300);

        // calcular suma
        int suma = 0;
        for (int numero : numeros2) {
            suma += numero;
        }
        System.out.println("Números: " + numeros2);
        System.out.println("Suma: " + suma);

        // ===== OPERACIONES DE COLECCIONES =====

        System.out.println("\n===== OPERACIONES DE COLECCIONES =====\n");

        ArrayList<String> lista1 = new ArrayList<>();
        lista1.add("A");
        lista1.add("B");
        lista1.add("C");

        ArrayList<String> lista2 = new ArrayList<>();
        lista2.add("B");
        lista2.add("C");
        lista2.add("D");

        System.out.println("Lista 1: " + lista1);
        System.out.println("Lista 2: " + lista2);

        // usar Collections.addAll para agregar todos los elementos
        ArrayList<String> combinada = new ArrayList<>();
        Collections.addAll(combinada, "X", "Y", "Z");
        System.out.println("Lista combinada: " + combinada);

        // usar Collections.sort para ordenar
        ArrayList<String> desordenada = new ArrayList<>();
        desordenada.add("Zebra");
        desordenada.add("Apple");
        desordenada.add("Mango");
        System.out.println("Antes de ordenar: " + desordenada);
        Collections.sort(desordenada);
        System.out.println("Después de ordenar: " + desordenada);

        // ===== ITERAR COLECCIONES CON ITERATOR =====

        System.out.println("\n===== ITERATOR =====\n");

        ArrayList<String> paises = new ArrayList<>();
        paises.add("México");
        paises.add("España");
        paises.add("Chile");
        paises.add("Argentina");

        System.out.println("Recorrido con Iterator:");
        Iterator<String> iterador = paises.iterator();
        while (iterador.hasNext()) {
            System.out.println("  - " + iterador.next());
        }

        // ===== PAIR: GUARDANDO PARES CLAVE-VALOR =====

        System.out.println("\n===== MAPA COMO REGISTRO ESTRUCTURADO =====\n");

        // crear un mapa que representa un usuario
        HashMap<String, Object> usuario = new HashMap<>();
        usuario.put("nombre", "Fernando");
        usuario.put("edad", 28);
        usuario.put("ciudad", "Madrid");
        usuario.put("activo", true);

        System.out.println("Usuario: " + usuario);
        System.out.println("Nombre: " + usuario.get("nombre"));
        System.out.println("Edad: " + usuario.get("edad"));
        System.out.println("Ciudad: " + usuario.get("ciudad"));

    }
}
