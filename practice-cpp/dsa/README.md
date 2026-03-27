# 📚 DSA-C++

> Implementación de estructuras de datos y algoritmos en C++

Este repositorio contiene implementaciones fundamentales de estructuras de datos y algoritmos (DSA) utilizando el lenguaje **C++**, ideales para reforzar habilidades de programación, entrevistas técnicas y comprensión de conceptos esenciales.

---

## Estructuras de Datos Implementadas

### Linked List (Lista Enlazada)

Implementación básica de una lista enlazada simple.

- Se define una clase **`Node`** que representa cada elemento de la lista.
- Se construye una clase **`LinkedList`** con operaciones esenciales.

#### Métodos implementados

| Método      | Descripción                                                  |
|-------------|--------------------------------------------------------------|
| `append`    | Agrega un nuevo nodo al final de la lista                    |
| `prepend`   | Agrega un nuevo nodo al inicio de la lista                   |
| `printList` | Muestra los valores de la lista en un formato legible        |

#### Ejemplo de uso

```cpp
    LinkedList* linkedList = new LinkedList(4);

    linkedList->append(5);
    linkedList->append(6);
    linkedList->append(7);

    linkedList->printList();
```
