public class Strings {
    public static void main(String[] args) {

        // ===== CREACIÓN DE STRINGS =====

        System.out.println("===== CREACIÓN DE STRINGS =====");

        // forma 1: literal de string
        String mensaje = "Hola mundo";

        // forma 2: usando constructor (menos común)
        String mensaje2 = new String("Hola desde constructor");

        System.out.println(mensaje);
        System.out.println(mensaje2);

        // ===== MÉTODO LENGTH(): LONGITUD DEL STRING =====

        System.out.println("\n===== MÉTODO LENGTH() =====");

        String texto = "Java";
        int longitud = texto.length();
        System.out.println("String: \"" + texto + "\"");
        System.out.println("Longitud: " + longitud);

        String frase = "Aprendiendo Java es divertido";
        System.out.println("String: \"" + frase + "\"");
        System.out.println("Longitud: " + frase.length());

        // ===== MÉTODO CHARAT(): OBTENER CARÁCTER POR ÍNDICE =====

        System.out.println("\n===== MÉTODO CHARAT() =====");

        String palabra = "Python";
        System.out.println("String: \"" + palabra + "\"");
        System.out.println("Carácter en índice 0: " + palabra.charAt(0));
        System.out.println("Carácter en índice 2: " + palabra.charAt(2));
        System.out.println("Carácter en índice 5 (último): " + palabra.charAt(5));

        // ===== MÉTODO SUBSTRING(): EXTRAER PARTE DEL STRING =====

        System.out.println("\n===== MÉTODO SUBSTRING() =====");

        String frase2 = "Programación en Java";
        System.out.println("String original: \"" + frase2 + "\"");

        // substring(inicio) - desde la posición inicio hasta el final
        String parte1 = frase2.substring(0, 11);
        System.out.println("substring(0, 11): \"" + parte1 + "\"");

        // substring(inicio, fin) - desde inicio hasta fin (fin no incluido)
        String parte2 = frase2.substring(15, 19);
        System.out.println("substring(15, 19): \"" + parte2 + "\"");

        // ===== MÉTODO INDEXOF(): BUSCAR POSICIÓN DE CARÁCTER =====

        System.out.println("\n===== MÉTODO INDEXOF() =====");

        String oracion = "El gato está en la casa";
        System.out.println("String: \"" + oracion + "\"");

        int posicion = oracion.indexOf("gato");
        System.out.println("Posición de \"gato\": " + posicion);

        int posicionEspacio = oracion.indexOf(" ");
        System.out.println("Posición del primer espacio: " + posicionEspacio);

        int noEncontrado = oracion.indexOf("perro");
        System.out.println("Posición de \"perro\" (no existe): " + noEncontrado); // retorna -1

        // ===== MÉTODO CONTAINS(): VERIFICAR SI CONTIENE SUBSTRING =====

        System.out.println("\n===== MÉTODO CONTAINS() =====");

        String texto2 = "Me encanta programar en Java";
        System.out.println("String: \"" + texto2 + "\"");
        System.out.println("¿Contiene 'Java'? " + texto2.contains("Java"));
        System.out.println("¿Contiene 'Python'? " + texto2.contains("Python"));
        System.out.println("¿Contiene 'programar'? " + texto2.contains("programar"));

        // ===== MÉTODO REPLACE(): REEMPLAZAR CARACTERES =====

        System.out.println("\n===== MÉTODO REPLACE() =====");

        String original = "Hola Mundo";
        System.out.println("String original: \"" + original + "\"");

        String reemplazado = original.replace("Mundo", "Java");
        System.out.println("Después de reemplazar 'Mundo' por 'Java': \"" + reemplazado + "\"");

        String conEspacios = "Hola Mundo Hola";
        String sinHolas = conEspacios.replace("Hola", "Hey");
        System.out.println("Reemplazar todas las ocurrencias: \"" + sinHolas + "\"");

        // ===== MÉTODOS TOUPPERCASE() Y TOLOWERCASE() =====

        System.out.println("\n===== MÉTODOS TOUPPERCASE() Y TOLOWERCASE() =====");

        String mixto = "PrOgRaMaCiÓn";
        System.out.println("String original: \"" + mixto + "\"");
        System.out.println("toUpperCase(): \"" + mixto.toUpperCase() + "\"");
        System.out.println("toLowerCase(): \"" + mixto.toLowerCase() + "\"");

        // ===== MÉTODO TRIM(): ELIMINAR ESPACIOS AL INICIO Y FINAL =====

        System.out.println("\n===== MÉTODO TRIM() =====");

        String conEspacioEnBlanco = "  Hola Mundo  ";
        System.out.println("String con espacios: \"" + conEspacioEnBlanco + "\"");
        System.out.println("Longitud original: " + conEspacioEnBlanco.length());

        String sinEspacios = conEspacioEnBlanco.trim();
        System.out.println("Después de trim(): \"" + sinEspacios + "\"");
        System.out.println("Longitud después de trim: " + sinEspacios.length());

        // ===== MÉTODO EQUALS(): COMPARAR STRINGS =====

        System.out.println("\n===== MÉTODO EQUALS() =====");

        String password = "Seguro123";
        String passwordIngresado = "Seguro123";
        String passwordIncorrecto = "seguro123";

        System.out.println("password.equals(passwordIngresado): " + password.equals(passwordIngresado));
        System.out.println("password.equals(passwordIncorrecto): " + password.equals(passwordIncorrecto));

        // equalsIgnoreCase(): ignora mayúsculas/minúsculas
        System.out.println("password.equalsIgnoreCase(passwordIncorrecto): " + password.equalsIgnoreCase(passwordIncorrecto));

        // ===== MÉTODO COMPARETO(): COMPARACIÓN LEXICOGRÁFICA =====

        System.out.println("\n===== MÉTODO COMPARETO() =====");

        String a = "Apple";
        String b = "Banana";
        String c = "Apple";

        System.out.println("\"" + a + "\".compareTo(\"" + b + "\"): " + a.compareTo(b)); // negativo (A < B)
        System.out.println("\"" + b + "\".compareTo(\"" + a + "\"): " + b.compareTo(a)); // positivo (B > A)
        System.out.println("\"" + a + "\".compareTo(\"" + c + "\"): " + a.compareTo(c)); // cero (igual)

        // ===== MÉTODO SPLIT(): DIVIDIR STRING EN ARRAY =====

        System.out.println("\n===== MÉTODO SPLIT() =====");

        String csv = "Juan,Carlos,Diana,Bruno";
        System.out.println("String original: \"" + csv + "\"");

        String[] nombres = csv.split(",");
        System.out.println("Dividido por coma:");
        for (String nombre : nombres) {
            System.out.println("  - " + nombre);
        }

        String frase3 = "El lenguaje Java es poderoso";
        String[] palabras = frase3.split(" ");
        System.out.println("\n\"" + frase3 + "\"");
        System.out.println("Dividido por espacios:");
        for (String palabra2 : palabras) {
            System.out.println("  - " + palabra2);
        }

        // ===== INMUTABILIDAD DE STRINGS =====

        System.out.println("\n===== INMUTABILIDAD DE STRINGS =====");

        // Los strings en Java son inmutables
        String original2 = "Hola";
        System.out.println("String original: \"" + original2 + "\"");

        String modificado = original2.toUpperCase();
        System.out.println("Después de toUpperCase(): \"" + modificado + "\"");
        System.out.println("Original sigue siendo: \"" + original2 + "\"");
        System.out.println("¿original2 == \"Hola\"? " + original2.equals("Hola")); // true

        // ===== STRINGBUILDER: CONCATENACIÓN EFICIENTE =====

        System.out.println("\n===== STRINGBUILDER: CONCATENACIÓN EFICIENTE =====");

        // Concatenación con + (menos eficiente para bucles)
        String resultado1 = "";
        for (int i = 1; i <= 5; i++) {
            resultado1 += i;
        }
        System.out.println("Concatenación con +: " + resultado1);

        // StringBuilder (más eficiente para múltiples concatenaciones)
        StringBuilder sb = new StringBuilder();
        for (int i = 1; i <= 5; i++) {
            sb.append(i);
        }
        String resultado2 = sb.toString();
        System.out.println("Concatenación con StringBuilder: " + resultado2);

        // StringBuilder ejemplo práctico
        StringBuilder fraseBuild = new StringBuilder();
        fraseBuild.append("Me llamo ");
        fraseBuild.append("Fernando");
        fraseBuild.append(" y me encanta ");
        fraseBuild.append("programar en Java");
        System.out.println("Frase construida: " + fraseBuild.toString());

        // ===== CONVERSIÓN A STRING =====

        System.out.println("\n===== CONVERSIÓN A STRING =====");

        int numero = 42;
        String stringNumero = String.valueOf(numero);
        System.out.println("int " + numero + " convertido a String: \"" + stringNumero + "\"");

        double decimal = 3.14;
        String stringDecimal = String.valueOf(decimal);
        System.out.println("double " + decimal + " convertido a String: \"" + stringDecimal + "\"");

    }
}
