#include "Pila.h"

/* Método constructor de la clase */
Pila::Pila() : tope(0)
{
}

/* Método destructor de la clase */
Pila::~Pila()
{
    /// Se llama al destructor de la lista.
}

/* Método que agrega un nuevo elemento a la pila.
Utilizando la lista anteriormente programada, hacemos el agregado al final. */
void Pila::push(elemento nuevo)
{
    /* Método que debió ser implementado en la lista. */
    /// agregarAlFinal(nuevo);
    /* void Lista::agregarAlFinal(elemento nuevo)
    {
        ultimo = ultimo.siguiente(nuevo);
        ultimo = ultimo.getSiguiente();
    }
    */
}

/* Método que devuelve el primer elemento de la lista.
Utilizando la lista anteriormente programada, hacemos el agregado al final. */
elemento Pila::peek()
{
    /* Método que debió ser implementado en la lista. */
    /// return getUltimo();
    /* elemento Lista::getUltimo()
    {
        return ultimo;
    }
    */
    // return tope;
}

/* Método que devuelve el primer elemento de la lista y lo elimina.
Utilizando la lista anteriormente programada, hacemos el agregado al final. */
elemento Pila::pop()
{
    /* Método que debió ser implementado en la lista. */
    /// elemento aux = getUltimo();
    /* void Lista::borrarUltimo()
    {
        elemento aux2= primero;
        while(siguiente(aux) != ultimo)
        {
            aux2 = siguiente(aux2);
        }
        delete siguiente(aux2);
        ultimo = aux2;
        aux2.setSiguiente(NULL);
    }
    */
    // return aux;
}
