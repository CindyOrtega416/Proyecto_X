//
// Created by martin on 13/11/18.
//
#include <string>
#include <ostream>

#ifndef PROGRAMACION3_PAR_H
#define PROGRAMACION3_PAR_H

using namespace std;


class Par {
private:
    string original;
    string traduccion;
public:
    Par() {
        original = "";
        traduccion = "";
    }

    Par(const string &original, const string &traduccion) : original(original), traduccion(traduccion) {}

    bool operator==(const Par &rhs) const {
        return original == rhs.original;
    }

    bool operator<(const Par &rhs) const {
        return original < rhs.original;
    }

    bool operator>(const Par &rhs) const {
        return original > rhs.original;
    }

    const string &getOriginal() const {
        return original;
    }

    const string &getTraduccion() const {
        return traduccion;
    }


    friend ostream &operator<<(ostream &os, const Par &par) {
        os << "original: " << par.original;
        return os;
    }
};


#endif //PROGRAMACION3_PAR_H
