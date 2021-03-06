#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <iostream>

using namespace std;

class Elemento {

	friend ostream & operator<<(ostream &, const Elemento &);

protected:
	Elemento();
	Elemento *hijoIzq, *hijoDer;

public:

	Elemento * getHijoIzq();
	Elemento * getHijoDer();
	void setHijoIzq(Elemento *);
	void setHijoDer(Elemento *);

	virtual ~Elemento();
	virtual int compareTo(Elemento *) = 0;
	virtual void imprimir(ostream &) const = 0;

	bool operator<(Elemento &);
	bool operator<=(Elemento &);
	bool operator>(Elemento &);
	bool operator>=(Elemento &);

};
#endif // ELEMENTO_H
ostream & operator<<(ostream &, const Elemento &);
