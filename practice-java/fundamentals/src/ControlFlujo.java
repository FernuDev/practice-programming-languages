public class ControlFlujo {
    public static void main(String[] args) {

        // ===== ESTRUCTURA IF / ELSE IF / ELSE =====

        System.out.println("===== IF / ELSE IF / ELSE =====");

        int calificacion = 85;
        System.out.println("Calificación: " + calificacion);

        if (calificacion >= 90) {
            System.out.println("Grado: A (Excelente)");
        } else if (calificacion >= 80) {
            System.out.println("Grado: B (Bueno)");
        } else if (calificacion >= 70) {
            System.out.println("Grado: C (Satisfactorio)");
        } else if (calificacion >= 60) {
            System.out.println("Grado: D (Suficiente)");
        } else {
            System.out.println("Grado: F (Reprobado)");
        }

        // ===== SWITCH STATEMENT (CLÁSICO) =====

        System.out.println("\n===== SWITCH STATEMENT =====");

        int diaSemana = 3;
        String nombreDia;

        switch (diaSemana) {
            case 1:
                nombreDia = "Lunes";
                break;
            case 2:
                nombreDia = "Martes";
                break;
            case 3:
                nombreDia = "Miércoles";
                break;
            case 4:
                nombreDia = "Jueves";
                break;
            case 5:
                nombreDia = "Viernes";
                break;
            case 6:
                nombreDia = "Sábado";
                break;
            case 7:
                nombreDia = "Domingo";
                break;
            default:
                nombreDia = "Día inválido";
        }

        System.out.println("Día " + diaSemana + ": " + nombreDia);

        // ===== SWITCH CON STRINGS =====

        System.out.println("\n===== SWITCH CON STRINGS =====");

        String estacion = "verano";
        String temperatura;

        switch (estacion) {
            case "primavera":
                temperatura = "Templado (15-20°C)";
                break;
            case "verano":
                temperatura = "Cálido (25-35°C)";
                break;
            case "otoño":
                temperatura = "Fresco (10-15°C)";
                break;
            case "invierno":
                temperatura = "Frío (0-10°C)";
                break;
            default:
                temperatura = "Estación desconocida";
        }

        System.out.println("En " + estacion + ": " + temperatura);

        // ===== SWITCH EXPRESSION (Java 14+) =====

        System.out.println("\n===== SWITCH EXPRESSION (Java 14+) =====");

        int mes = 3;

        // Switch expression: retorna un valor directamente
        String nombreMes = switch (mes) {
            case 1 -> "Enero";
            case 2 -> "Febrero";
            case 3 -> "Marzo";
            case 4 -> "Abril";
            case 5 -> "Mayo";
            case 6 -> "Junio";
            case 7 -> "Julio";
            case 8 -> "Agosto";
            case 9 -> "Septiembre";
            case 10 -> "Octubre";
            case 11 -> "Noviembre";
            case 12 -> "Diciembre";
            default -> "Mes inválido";
        };

        System.out.println("Mes " + mes + ": " + nombreMes);

        // ===== COMPARACIÓN: IF vs SWITCH EXPRESSION =====

        System.out.println("\n===== COMPARACIÓN: TIPOS DE CONTROL =====");

        int horaDelDia = 14;

        // Opción 1: if/else
        String periodoIfElse;
        if (horaDelDia >= 6 && horaDelDia < 12) {
            periodoIfElse = "Mañana";
        } else if (horaDelDia >= 12 && horaDelDia < 18) {
            periodoIfElse = "Tarde";
        } else if (horaDelDia >= 18 && horaDelDia < 24) {
            periodoIfElse = "Noche";
        } else {
            periodoIfElse = "Madrugada";
        }
        System.out.println("Hora " + horaDelDia + " (if/else): " + periodoIfElse);

        // Opción 2: switch expression (más legible para múltiples casos)
        String periodoSwitch = switch (horaDelDia / 6) {
            case 0 -> "Madrugada";
            case 1 -> "Mañana";
            case 2 -> "Tarde";
            case 3 -> "Noche";
            default -> "Hora inválida";
        };
        System.out.println("Hora " + horaDelDia + " (switch): " + periodoSwitch);

        // ===== ANIDAMIENTO DE ESTRUCTURAS =====

        System.out.println("\n===== ANIDAMIENTO DE ESTRUCTURAS =====");

        int edad = 25;
        boolean tieneLicencia = true;

        if (edad >= 18) {
            System.out.println("Es mayor de edad");

            if (tieneLicencia) {
                System.out.println("Puede conducir");
            } else {
                System.out.println("Necesita obtener licencia para conducir");
            }
        } else {
            System.out.println("Es menor de edad, no puede conducir");
        }

    }
}
