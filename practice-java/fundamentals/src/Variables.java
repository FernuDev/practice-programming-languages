public class Variables {
    public static void main(String[] args){

        // Existen clases wrappers que extienden a tipos primitivos
        String saludo = "Hola mundo desde Java";
        System.out.println(saludo);
        System.out.println("saludar.toUppercase() " + saludo.toUpperCase());

        // Tipos primitivos son aquellos datos simples
        // sin metodos que solo almacenan un valor, útiles para ahorro de memoria
        // y operaciones simples
        int numero = 11;
        boolean valor = true;
        int numero2 = 5;

        // Sentencias de control son aquellas que permiten manejar el flujo del programa
        // de manera condicional, en bucle, etc.
        if (valor) {
            System.out.println(numero);
        } else {
            System.out.println(numero2);
        }

    }
}
