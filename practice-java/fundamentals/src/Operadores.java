public class Operadores {
    public static void main(String[] args) {

        // ===== OPERADORES ARITMÉTICOS =====

        int numero1 = 20;
        int numero2 = 5;

        int suma = numero1 + numero2;
        int resta = numero1 - numero2;
        int multiplicacion = numero1 * numero2;
        int division = numero1 / numero2;
        int modulo = numero1 % numero2; // residuo de la división

        System.out.println("OPERADORES ARITMÉTICOS:");
        System.out.println(numero1 + " + " + numero2 + " = " + suma);
        System.out.println(numero1 + " - " + numero2 + " = " + resta);
        System.out.println(numero1 + " * " + numero2 + " = " + multiplicacion);
        System.out.println(numero1 + " / " + numero2 + " = " + division);
        System.out.println(numero1 + " % " + numero2 + " = " + modulo);

        // ===== OPERADORES RELACIONALES (COMPARACIÓN) =====

        System.out.println("\nOPERADORES RELACIONALES:");
        System.out.println(numero1 + " == " + numero2 + " : " + (numero1 == numero2)); // igual a
        System.out.println(numero1 + " != " + numero2 + " : " + (numero1 != numero2)); // distinto a
        System.out.println(numero1 + " > " + numero2 + " : " + (numero1 > numero2));   // mayor que
        System.out.println(numero1 + " < " + numero2 + " : " + (numero1 < numero2));   // menor que
        System.out.println(numero1 + " >= " + numero2 + " : " + (numero1 >= numero2)); // mayor o igual
        System.out.println(numero1 + " <= " + numero2 + " : " + (numero1 <= numero2)); // menor o igual

        // ===== OPERADORES LÓGICOS =====

        boolean condicion1 = true;
        boolean condicion2 = false;

        System.out.println("\nOPERADORES LÓGICOS:");
        System.out.println("true && false (AND): " + (condicion1 && condicion2));
        System.out.println("true || false (OR): " + (condicion1 || condicion2));
        System.out.println("!true (NOT): " + (!condicion1));

        // AND (&&): ambas condiciones deben ser verdaderas
        boolean loginExitoso = (numero1 > numero2) && (numero2 > 0); // true && true = true
        System.out.println("¿Login exitoso? " + loginExitoso);

        // OR (||): al menos una condición debe ser verdadera
        boolean esFeriadoOFindeSemana = false || true; // false || true = true
        System.out.println("¿Es feriado o fin de semana? " + esFeriadoOFindeSemana);

        // ===== OPERADORES DE ASIGNACIÓN =====

        System.out.println("\nOPERADORES DE ASIGNACIÓN:");
        int valor = 10;
        System.out.println("valor inicial: " + valor);

        valor += 5; // equivalente a: valor = valor + 5
        System.out.println("después de += 5: " + valor);

        valor -= 3; // equivalente a: valor = valor - 3
        System.out.println("después de -= 3: " + valor);

        valor *= 2; // equivalente a: valor = valor * 2
        System.out.println("después de *= 2: " + valor);

        valor /= 4; // equivalente a: valor = valor / 4
        System.out.println("después de /= 4: " + valor);

        // ===== OPERADORES DE INCREMENTO Y DECREMENTO =====

        System.out.println("\nOPERADORES DE INCREMENTO Y DECREMENTO:");
        int contador = 5;
        System.out.println("contador inicial: " + contador);

        contador++; // incremento post-fijo (usa el valor actual, luego incrementa)
        System.out.println("después de contador++: " + contador);

        contador--; // decremento post-fijo (usa el valor actual, luego decrementa)
        System.out.println("después de contador--: " + contador);

        ++contador; // incremento pre-fijo (incrementa primero, luego usa el valor)
        System.out.println("después de ++contador: " + contador);

        --contador; // decremento pre-fijo (decrementa primero, luego usa el valor)
        System.out.println("después de --contador: " + contador);

        // ===== OPERADOR TERNARIO =====

        System.out.println("\nOPERADOR TERNARIO:");
        int edad = 18;
        String puedeVotar = (edad >= 18) ? "Sí, puede votar" : "No, aún es menor de edad";
        System.out.println("¿" + edad + " años puede votar? " + puedeVotar);

        int calificacion = 75;
        String resultado = (calificacion >= 60) ? "Aprobado" : "Reprobado";
        System.out.println("Calificación de " + calificacion + ": " + resultado);

        // ===== OPERADORES BITWISE (BIT A BIT) =====

        System.out.println("\nOPERADORES BITWISE:");
        int a = 5;    // binario: 0101
        int b = 3;    // binario: 0011

        System.out.println("a = " + a + " (binario: " + Integer.toBinaryString(a) + ")");
        System.out.println("b = " + b + " (binario: " + Integer.toBinaryString(b) + ")");

        int and = a & b;        // AND bit a bit
        int or = a | b;         // OR bit a bit
        int xor = a ^ b;        // XOR bit a bit
        int not = ~a;           // NOT bit a bit
        int leftShift = a << 1; // desplazamiento a la izquierda
        int rightShift = a >> 1; // desplazamiento a la derecha

        System.out.println(a + " & " + b + " = " + and + " (binario: " + Integer.toBinaryString(and) + ")");
        System.out.println(a + " | " + b + " = " + or + " (binario: " + Integer.toBinaryString(or) + ")");
        System.out.println(a + " ^ " + b + " = " + xor + " (binario: " + Integer.toBinaryString(xor) + ")");
        System.out.println("~" + a + " = " + not);
        System.out.println(a + " << 1 = " + leftShift);
        System.out.println(a + " >> 1 = " + rightShift);

    }
}
