#include "Pila.h"

/* M�todo constructor de la clase */
Pila::Pila() : tope(0)
{
}

/* M�todo destructor de la clase */
Pila::~Pila()
{
    /// Se llama al destructor de la lista.
}

/* M�todo que agrega un nuevo elemento a la pila.
Utilizando la lista anteriormente programada, hacemos el agregado al final. */
void Pila::push(elemento nuevo)
{
    /* M�todo que debi� ser implementado en la lista. */
    /// agregarAlFinal(nuevo);
    /* void Lista::agregarAlFinal(elemento nuevo)
    {
        ultimo = ultimo.siguiente(nuevo);
        ultimo = ultimo.getSiguiente();
    }
    */
}

/* M�todo que devuelve el primer elemento de la lista.
Utilizando la lista anteriormente programada, hacemos el agregado al final. */
elemento Pila::peek()
{
    /* M�todo que debi� ser implementado en la lista. */
    /// return getUltimo();
    /* elemento Lista::getUltimo()
    {
        return ultimo;
    }
    */
    // return tope;
}

/* M�todo que devuelve el primer elemento de la lista y lo elimina.
Utilizando la lista anteriormente programada, hacemos el agregado al final. */
elemento Pila::pop()
{
    /* M�todo que debi� ser implementado en la lista. */
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
