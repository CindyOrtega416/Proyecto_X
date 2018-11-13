#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include "ArbolBinarioCod.h"
#include "ArbolBinarioDesc.h"
#include <cctype>
#include <cstring>
#include <cstdio>
#include <algorithm>


using namespace std;

template<class T, class K>
ArbolBinarioCod<T, K> aCod;

template<class T, class K>
ArbolBinarioDesc<T, K> aDesc;

void encode(string arc, string dic, string imp);
void decode(string arc, string dic, string imp);
void splitAndPut(string cut, bool cod);

int main() {

    int i;
    int dato;
    bool foo = false;
    int u;
    string rutaA;
    string rutaD;
    string rutaI;
    string str;

    while (!foo){
        cout << "Elija una opcion:"<<endl;
        cout << "Codificar -------------> 1"<<endl;
        cout << "Decodificar -----------> 2"<<endl;
        cout << "Salir -----------------> 3"<<endl;

        cin >> u;

        switch (u){

            case 1:

                cout << "Ingrese ruta de archivo a codificar:" << endl;
                cin >> rutaA;

                cout << "Ingrese ruta del diccionario:" << endl;
                cin >> rutaD;

                cout << "Ingrese ruta de archivo a imprimir:" << endl;
                cin >> rutaI;

                encode(rutaA, rutaD, rutaI);
                break;

            case 2:

                cout << "Ingrese ruta de archivo a descodificar:" << endl;
                cin >> rutaA;

                cout << "Ingrese ruta del diccionario:" << endl;
                cin >> rutaD;

                cout << "Ingrese ruta de archivo a imprimir:" << endl;
                cin >> rutaI;

                decode(rutaA, rutaD, rutaI);
                break;

            case 3:
                foo = true;
                break;

            default:
                cout<< "Opcion incorrecta."<< endl;
                break;
        }
    }


    return 0;
}




void encode(string arc, string dic, string imp) {
    ifstream fileDic(dic);
    ifstream fileArc(arc);
    ofstream fileImp(imp);
    string str;
    string word;

    while (getline(fileDic, str)) {
        splitAndPut(str, true);
    }

    while (fileArc >> word) {

        transform(word.begin(), word.end(), word.begin(), ::tolower);

        try {
            fileImp << aCod<string, string>.BuscarK(word) + " ";
        } catch (...){
            fileImp << word + " ";
        }

        /* string foo = aCod<string, string>.BuscarK(word);
        if (foo != nullptr){
            fileImp << foo + " ";
        } else {
            fileImp << word + " ";
        }*/
    }

    fileArc.close();
    fileDic.close();
    fileImp.close();
}


void splitAndPut(string cut, bool cod) {
    // Used to split string around spaces.
    istringstream ss(cut);

    string word[2];

    int i = 0;

    do {
        // Read a word
        ss >> word[i];
        i++;

    } while (ss);

    if (cod){
        aCod<string, string>.Insertar(word[1], word[0]);
    } else {
        aDesc<string, string>.Insertar(word[1], word[0]);
    }

    cout << word[0]  << endl; // desc
    cout << word[1]  << endl; // cod

 }

void decode(string arc, string dic, string imp) {
    ifstream fileDic(dic);
    ifstream fileArc(arc);
    ofstream fileImp(imp);
    string str;
    string word;

    while (getline(fileDic, str)) {
        splitAndPut(str, false);
    }

    while (fileArc >> word) {

        transform(word.begin(), word.end(), word.begin(), ::tolower);

        try {
            fileImp << aCod<string, string>.BuscarK(word) + " ";
        } catch (...){
            fileImp << word + " ";
        }
    }

    fileArc.close();
    fileDic.close();
    fileImp.close();
}