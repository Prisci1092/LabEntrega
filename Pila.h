#ifndef PILA_H
#define PILA_H

typedef int elemento;
class Pila
{
    public:
        Pila();
        virtual ~Pila();
        void push(elemento nuevo);
        elemento peek();
        elemento pop();

    protected:
        /* En caso de que no se contara con estos en la lista */
        elemento primero;
        elemento tope;
};

#endif // PILA_H
