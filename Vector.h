#pragma once
#include <sstream>
#include <string>
using namespace std;

    //-------Def.Clase template-----
template <class T>
class Vector 
{
private:

	int cant;
	int tam;
	T** vector_;

public:

	//--------Constructor------------
	Vector(int = 20);

	//-----ConstructorCopia----------
	Vector(Vector&);

	//--------Destructor-------------
	virtual ~Vector();


	//--------Métodos----------------
	virtual bool agregar(T* x);
	virtual bool buscar(T*);
	virtual bool eliminar(T*);
	virtual string toString() const;
	int getCantidad();
	T* getVecM(int c);
	Vector& operator=(Vector&);
};

//------------------------------Definición métodos---------------------------------------------------

//---------------------------------Constructor-------------------------------------------------------
template <class T>
Vector<T>::Vector(int n) : cant(n), tam(0), vector_(new T* [n]) {
	for (int i = 0; i < cant; i++)
	{
		vector_[i] = NULL;
	}
}//--------------------------------------------


template <class T>
Vector<T>::Vector(Vector& c) {

	// creamos nueva memoria y copiamos los elementos
	tam = c.tam;
	cant = c.cant;
	vector_ = new T * [c.cant];

	for (int i = 0; i < c.tam; i++)
	{
		T* x = new T(*(c.vector_[i]));// si el elemento fuera un objeto, se estaria
			   // llamando al constructor de copia por defecto de la clase.
		vector_[i] = x;


	}

}
//----------------------------------------------
template <class T>
Vector<T>& Vector<T>::operator=(Vector& c)
{

	for (int i = 0; i < cant; i++)
	{
		delete vector_[i];
	}
	delete[]vector_;

	// creamos nueva memoria y copiamos los elementos
	tam = c.tam;
	cant = c.cant;
	vector_ = new T * [c.cant];

	for (int i = 0; i < c.tam; i++)
	{
		T* x = new T(*(c.vector_[i]));// si el elemento fuera un objeto, se estaria
			   // llamando al constructor de copia por defecto de la clase.
		vector_[i] = x;
	}

	return *this;
}
//--------------------------------------------
template <class T>
Vector<T>::~Vector() {
	for (int i = 0; i < tam; i++)
	{
		delete vector_[i];
	}
	delete[] vector_;
}
//--------------------------------------------
template <class T>
bool Vector<T>::agregar(T* x) {
	if (tam < cant) {
		vector_[tam++] = x;
		return true;
	}
	return false; 
}
//--------------------------------------------
template <class T>
string Vector<T>::toString() const {
	stringstream r;

	for (int i = 0; i < tam; i++) 
	{
		r << *vector_[i];
	}
	
	return r.str();
}
//---------------------------------------------
template<class T>
int Vector<T>::getCantidad()
{
	return tam;

}
//----------------------------------------------
template<class T>
T* Vector<T>::getVecM(int c)
{
	return vector_[c];
}

//----------------------------------------------
template <class T>
bool Vector<T>::buscar(T* aux) {
	for (int i = 0; i < tam; i++)
	{
		if ((aux) == (vector_[i]))
		{
			return true;
		}
	}
	return false;
}

//----------------------------------------------
template <class T>
bool Vector<T>::eliminar(T* aux)
{    // si fuera el ultimo

	if ((vector_[tam - 1]) == (aux))
	{
		delete vector_[tam - 1];
		vector_[tam - 1] = NULL;
		tam--;
		return true;
	}
	// si no fuera el ultimo implica corrimiento
	int pos = -1;

	for (int i = 0; i < tam - 1; i++)
	{
		if ((vector_[i]) == (aux))
		{
			pos = i;
		}
	}

	if (pos != -1)
	{
		delete vector_[pos];
		for (int j = pos; j < tam - 1; j++)// hacemos el corrimiento
		{
			vector_[j] = vector_[j + 1];
		}
		vector_[tam - 1] = NULL;
		tam--;

	}

	return false;
}
//--------------------------------------------------------------------------------------------------