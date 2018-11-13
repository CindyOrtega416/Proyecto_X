#ifndef PROGRAMACION3_ARBOLBINARIO_H
#define PROGRAMACION3_ARBOLBINARIO_H


#include "NodoArbol.h"
#include <iostream>

using namespace std;

template<class T>
class ArbolBinario {
private:
    NodoArbol<T> *raiz;
public:
    ArbolBinario();

    void put(T dato);

    T search(T dato);

    void remove(T dato);

    void preorder();

    void inorder();

    void postorder();

    ~ArbolBinario();

    bool esVacio();

    void print();
protected:
    void put(T dato, NodoArbol<T> *r);

    T search(T dato, NodoArbol<T> *r);

    NodoArbol<T> *remove(T dato, NodoArbol<T> *r);

    void preorder(NodoArbol<T> *r);

    void inorder(NodoArbol<T> *r);

    void postorder(NodoArbol<T> *r);
};


/**
 * Constructor del Arbol
 * @tparam K Clave por la cual va a ordenar el árbol
 * @tparam T Valor guardado por el árbol
 */
template<class T>
ArbolBinario<T>::ArbolBinario() {
    raiz = nullptr;
}


/**
 * Destructor del Arbol
 */
template<class T>
ArbolBinario<T>::~ArbolBinario() { }


/**
 * Busca un dato en el árbol. Si no esta el dato en el árbol
 * tira una excepción
 * @param clave Valor a buscar
 * @return el valor buscado
 */
template<class T>
T ArbolBinario<T>::search(T dato) {
    return search(dato, raiz);
}

template<class T>
T ArbolBinario<T>::search(T dato, NodoArbol<T> *r) {
    if (r == nullptr)
        throw 404;

    if (dato == r->getDato())
        return r->getDato();

    if (dato > r->getDato())
        return search(dato, r->getDer());

    if (dato < r->getDato())
        return search(dato, r->getIzq());
}

/**
 * Agrega un dato al árbol
 * @param clave Clave para agregar el dato
 * @param dato Dato a agregar
 */
template<class T>
void ArbolBinario<T>::put(T dato) {
    if(raiz != nullptr)
        put(dato, raiz);
    else
        raiz = new NodoArbol<T>(dato);
}

template<class T>
void ArbolBinario<T>::put(T dato, NodoArbol<T> *r) {
    T miDato = r->getDato();

    if(miDato == dato)
        throw 200;

    if(dato > miDato) {
        if(r->getDer() != nullptr) {
            put(dato, r->getDer());
        }else{
            auto *nuevo = new NodoArbol<T>(dato);
            r->setDer(nuevo);
        }
    }else{
        if (r->getIzq() != nullptr) {
            put(dato, r->getIzq());
        }else{
            auto *nuevo = new NodoArbol<T>(dato);
            r->setIzq(nuevo);
        }
    }
}

/**
 * Elimina un dato del árbol
 * @param clave Clave para identificar el nodo a borrar
 */
template<class T>
void ArbolBinario<T>::remove(T dato) {
    raiz = remove(dato, raiz);
}

template<class T>
NodoArbol<T> *ArbolBinario<T>::remove(T dato, NodoArbol<T> *r) {
    if(r == nullptr)
        throw 404;
    if(dato > r->getDato()) {
        r->setDer(remove(dato, r->getDer()));
        return r;
    }
    if(dato < r->getDato()) {
        r->setIzq(remove(dato, r->getIzq()));
        return r;
    }

    NodoArbol<T> *aux;
    if (r->getIzq() != nullptr) {
        if (r->getDer()) {
            put(r->getIzq(), r->getDer());
            aux = r->getDer();
        } else {
            aux = r->getIzq();
        }
    }

    delete r;
    return aux;
}

/**
 * Informa si un árbol esta vacío
 * @return
 */
template<class T>
bool ArbolBinario<T>::esVacio() {
    return (raiz == nullptr);
}


/**
 * Recorre un árbol en preorden
 */
template<class T>
void ArbolBinario<T>::preorder() {
    if (raiz != nullptr)
        preorder(raiz);
}

template<class T>
void ArbolBinario<T>::preorder(NodoArbol<T> *r) {
    cout << r->getDato() << ' ';
    if(r->getIzq() != nullptr)
        preorder(r->getIzq());
    if(r->getDer() != nullptr)
        preorder(r->getDer());
}


/**
 * Recorre un árbol en orden
 */
template<class T>
void ArbolBinario<T>::inorder() {
    if (raiz != nullptr)
        inorder(raiz);
}

template<class T>
void ArbolBinario<T>::inorder(NodoArbol<T> *r) {
    if(r->getIzq() != nullptr)
        inorder(r->getIzq());

    cout << r->getDato() << ' ';

    if(r->getDer() != nullptr)
        inorder(r->getDer());
}

/**
 * Recorre un árbol en postorden
 */
template<class T>
void ArbolBinario<T>::postorder() {
    if (raiz != nullptr)
        postorder(raiz);
}

template<class T>
void ArbolBinario<T>::postorder(NodoArbol<T> *r) {
    if(r->getIzq() != nullptr)
        postorder(r->getIzq());
    if(r->getDer() != nullptr)
        postorder(r->getDer());

    cout << r->getDato() << ' ';
}

/**
 * Muestra un árbol por consola
 */
template<class T>
void ArbolBinario<T>::print() {

}

#endif //PROGRAMACION3_ARBOLBINARIO_H
