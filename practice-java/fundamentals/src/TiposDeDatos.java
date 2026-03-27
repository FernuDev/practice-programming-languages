public class TiposDeDatos {
    public static void main(String[] args) {

        // ===== TIPOS PRIMITIVOS ENTEROS =====

        // byte: ocupa 1 byte, rango de -128 a 127
        byte edadByte = 25;
        System.out.println("byte (edad): " + edadByte);

        // short: ocupa 2 bytes, rango de -32,768 a 32,767
        short temperaturaBajaPorNoche = -5;
        System.out.println("short (temperatura baja): " + temperaturaBajaPorNoche);

        // int: ocupa 4 bytes, rango de -2,147,483,648 a 2,147,483,647
        int poblacionCiudad = 5000000;
        System.out.println("int (población): " + poblacionCiudad);

        // long: ocupa 8 bytes, rango muy grande, requiere sufijo 'L'
        long distanciaAlSol = 149600000L;
        System.out.println("long (distancia al sol en km): " + distanciaAlSol);

        // ===== TIPOS PRIMITIVOS DECIMALES =====

        // float: ocupa 4 bytes, precisión simple, requiere sufijo 'f'
        float precioProducto = 19.99f;
        System.out.println("float (precio): " + precioProducto);

        // double: ocupa 8 bytes, precisión doble (más preciso que float)
        double piValue = 3.14159265359;
        System.out.println("double (pi): " + piValue);

        // ===== TIPO PRIMITIVO CARÁCTER =====

        // char: ocupa 2 bytes, almacena un único carácter usando código Unicode
        char primerLetra = 'A';
        System.out.println("char (letra): " + primerLetra);

        // ===== TIPO PRIMITIVO BOOLEANO =====

        // boolean: solo puede tener dos valores: true o false
        boolean esActivo = true;
        System.out.println("boolean (es activo): " + esActivo);

        // ===== CLASES WRAPPER: VERSIONES OBJETO DE LOS TIPOS PRIMITIVOS =====

        // Wrapper classes permiten utilizar primitivos como objetos
        // Tienen métodos útiles y pueden almacenarse en colecciones
        Integer edadWrapper = 25;
        Double temperaturaWrapper = -5.5;
        Boolean esValidoWrapper = true;
        String caracterWrapper = "A";

        System.out.println("\nClases Wrapper:");
        System.out.println("Integer: " + edadWrapper + " (tipo: " + edadWrapper.getClass().getSimpleName() + ")");
        System.out.println("Double: " + temperaturaWrapper);
        System.out.println("Boolean: " + esValidoWrapper);

        // ===== CASTING (CONVERSIÓN ENTRE TIPOS) =====

        // Casting implícito (widening): tipo más pequeño a tipo más grande (automático)
        int numeroEntero = 100;
        double numeroDecimalImplicito = numeroEntero; // int → double automático
        System.out.println("\nCasting implícito (int → double): " + numeroDecimalImplicito);

        // Casting explícito (narrowing): tipo más grande a tipo más pequeño (requiere conversión)
        double numeroDecimalExplicito = 98.5;
        int numeroEnteroExplicito = (int) numeroDecimalExplicito; // double → int (se pierde la parte decimal)
        System.out.println("Casting explícito (double → int): " + numeroEnteroExplicito);

        // ===== CONSTANTES CON FINAL =====

        // final: indica que una variable no puede cambiar de valor una vez asignada
        final int VELOCIDAD_LUZ = 299792458; // metros por segundo
        final double CONSTANTE_GRAVITATORIA = 6.67430e-11;

        System.out.println("\nConstantes:");
        System.out.println("Velocidad de la luz: " + VELOCIDAD_LUZ + " m/s");
        System.out.println("Constante gravitatoria: " + CONSTANTE_GRAVITATORIA);

        // ===== RANGO DE VALORES PARA CADA TIPO =====

        System.out.println("\nRangos de valores:");
        System.out.println("byte: " + Byte.MIN_VALUE + " a " + Byte.MAX_VALUE);
        System.out.println("short: " + Short.MIN_VALUE + " a " + Short.MAX_VALUE);
        System.out.println("int: " + Integer.MIN_VALUE + " a " + Integer.MAX_VALUE);
        System.out.println("long: " + Long.MIN_VALUE + " a " + Long.MAX_VALUE);
        System.out.println("float: " + Float.MIN_VALUE + " a " + Float.MAX_VALUE);
        System.out.println("double: " + Double.MIN_VALUE + " a " + Double.MAX_VALUE);

    }
}
