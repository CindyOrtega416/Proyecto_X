#ifndef PROGRAMACION3_NODOARBOL_H
#define PROGRAMACION3_NODOARBOL_H


template<class T>
class NodoArbol {
private:
    NodoArbol<T> *izq;
    NodoArbol<T> *der;
    T dato;
public:
    NodoArbol() {
        izq = nullptr;
        der = nullptr;
    }

    NodoArbol(T d) {
        izq = nullptr;
        der = nullptr;
        dato = d;
    }

    T getDato() const { return dato; }

    void setDato(T dato) { this->dato = dato; }

    void setIzq(NodoArbol<T> *r) { this->izq = r; }

    void setDer(NodoArbol<T> *r) { this->der = r; }

    NodoArbol *getIzq() const { return izq; }

    NodoArbol *getDer() const { return der; }

    // void actualizar(T dato) {}

//    void print(bool esDerecho, string identacion) {
//        if (der != NULL) {
//            der->print(true, identacion + (esDerecho ? "     " : "|    "));
//        }
//        cout << identacion;
//        if (esDerecho) {
//            cout << " /";
//        } else {
//            cout << " \\";
//        }
//        cout << "-- ";
//        cout << dato << endl;
//        if (izq != NULL) {
//            izq->print(false, identacion + (esDerecho ? "|    " : "     "));
//        }
//    }
};

/*
template<class T, class K>
class NodoArbol {
private:
    T cod;
    K desc;
    int fe;
    NodoArbol<T, K> *izq;
    NodoArbol<T, K> *der;
    NodoArbol<T, K> *padre;
    template <T, K>friend class ArbolBinarioCod;
//    template <T, K>friend class ArbolBinarioDesc;


public:
    NodoArbol() {
        izq = nullptr;
        der = nullptr;
        padre = nullptr;
        fe = 0;
    }

    NodoArbol(T c, K d) {
        izq = nullptr;
        der = nullptr;
        padre = nullptr;
        //cod = c;
        //desc = d;
        fe = 0;
    }

    NodoArbol(T cod, K desc, NodoArbol *pad) {
        izq = nullptr;
        der = nullptr;
        padre = pad;
//        cod = c;
//        desc = d;
        fe = 0;
    }

    T getCod() const {
        return cod;
    }

    K getDesc() const {
        return desc;
    }

    void setCod(T cod) {
        this->cod = cod;
        //NodoArbol::cod = c;
    }

    void setDesc(T desc) {
        this->desc = desc;
        //NodoArbol::desc = d;
    }

    NodoArbol *getIzq() const {
        return izq;
    }

    void setIzq(NodoArbol *izq) {
        this->izq = izq;
        //NodoArbol::izq = izq;
    }

    NodoArbol *getDer() const {
        return der;
    }

    void setDer(NodoArbol *der) {
        this->der = der;
        //NodoArbol::der = der;
    }

    NodoArbol *getPad() const {
        return padre;
    }

    void setPad(NodoArbol *pad){
        this->padre = pad;
        //NodoArbol::padre = pad;
    }
};
 */
#endif //PROGRAMACION3_NODOARBOL_H