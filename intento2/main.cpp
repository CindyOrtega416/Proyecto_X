#include <iostream>
#include <fstream>        //para los archivos de texto
#include <stdlib.h>      //para los archivos de texto
#include <string>
#include <bits/stdc++.h>
#include "ArbolBinario.h"
//#include "ArbolBinarioCod.h"
//#include "ArbolBinarioDesc.h"
#include <cctype>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

void encode(string in, string dic, string out,int option);
void decode(string arc, string dic, string imp);

//void arbolencode(string out);
//void arboldecode(string out);

void creararbol(string diccionario,int option);
ArbolBinario <string> dic; //arbol binario del dicionario
void split(string cut);

//void splitAndPut(string cut);
void salida(string words, string out); //la cree solo para probar escribir el archivo de salida por separado



//aca creo un arbol de cada tipo, deberia de ser un solo tipo de arbol para reducir costo de codigo?
/*
template<class T, class K>
ArbolBinarioCod<T, K> aCod;
*/

//template<class T, class K>
//ArbolBinarioDesc<T, K> aDesc;


int main() {

//    int i;
//    int dato;
    bool foo = false;
    int option;
    string rutaA;
    string rutaD;
    string rutaI;
    string str;



//     creararbol(); //esta funcion me crea el arbol




    while (!foo){
        cout << "direccion del archivo de entrada /home/facu/CLionProjects/Proyecto_X/intento2/entrada.txt   --esto cambialo por la ubicacion del archivo en tu compu"<<endl;
        cout << "direccion del archivo de salida  /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/intento2/salida.txt  --esto cambialo por la ubicacion del archivo en tu compu"<<endl;
        cout << "direccion del archivo diccionario.txt /home/facu/CLionProjects/Proyecto_X/intento2/diccionario.txt"<<endl;
        cout << "Elija una opcion:"<<endl;
        cout << "Codificar -------------> 1"<<endl;
        cout << "Decodificar -----------> 2"<<endl;
        cout << "Salir -----------------> 3"<<endl;

        cin >> option;

        //deberia cambiar el menu por un if para asi utilizar las opciones de c y d como dice el proyecto?

        switch (option){

            case 1:

                cout << "Ingrese ruta de archivo a codificar:" << endl;
                cout << "/home/facu/CLionProjects/Proyecto_X/intento2/entrada.txt"<<endl;
                rutaA = "/home/facu/CLionProjects/Proyecto_X/intento2/entrada.txt"; //lo hago de forma automatica para ahorrar tiempo al codificar
                //cin >> rutaA;

                cout << "Ingrese ruta del diccionario:" << endl;
                cout << "/home/facu/CLionProjects/Proyecto_X/intento2/diccionario.txt"<<endl;
                rutaD = "/home/facu/CLionProjects/Proyecto_X/intento2/diccionario.txt"; //lo hago de forma automatica para ahorrar tiempo al codificar
                //cin >> rutaD;

                cout << "Ingrese ruta de archivo a imprimir:" << endl;
                cout << "/home/facu/CLionProjects/Proyecto_X/cmake-build-debug/intento2/salida.txt"<<endl;
                rutaI = "/home/facu/CLionProjects/Proyecto_X/cmake-build-debug/intento2/salida.txt";        //lo hago de forma automatica para ahorrar tiempo al codificar
                //cin >> rutaI;

                creararbol(rutaD,option);   //en esta funcion creo el arbol del diccionario

                //verificar que la informacion sea correcta antes de llamar a la otra funcion?
                encode(rutaA, rutaD, rutaI, option);

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
                cout << "Opcion incorrecta." << endl;
                break;
        }
    }

    system("pause");
    return 0;
}


//funcion utilizada para cortar el string por los espacios
/*
void splitAndPut(string cut) {
    // Used to split string around spaces.
    istringstream ss(cut);
}
*/

void split(string cut){

    stringstream ss(cut);
    string item;
    char delim = '  ';
    while(getline(ss,item,delim)){
        dic.put(item);
        cout<<"split "<<item<<endl;
    }
    //mando las palabras al arbol

//    cout<< "ingrese una palabra para buscarla en el arbol"<<endl;
//    string buscar;
//    cin>>buscar;
//    dic.search("buscar");
}

//funcion para crear el arbol del diccionario
//el dato option me dice si debo crear el arbol de codificar o el de decodificar
void creararbol(string diccionario,int option){

    string words;

    ifstream dictionary;
    dictionary.open(diccionario,ios::in);//abrimos el archivo en modo lectura
    //direccion del archivo diccionario.txt /home/facu/CLionProjects/Proyecto_X/intento2/diccionario.txt
    if(dictionary.fail()){
        cout << "No se pudo abrir el archivo de entrada";
        exit(1);
    }

    while(!dictionary.eof()) { //mientras no sea final del archivo
        getline(dictionary,words);

        //cout<<"este es el getline del diccionario"<<endl;
        //el getline me devuelve cada par de palabras, por ej: "archivo	pepe" o "pepe	casa"
        //tengo que ver como corto eso por la mitad y darlo vuelta para la decodificacion (uso el TAB /T)


        //deberia meter words directamente al arbol??
        //si meto el par de palabras como vienen seria el arbol de codificar, para crear el de decodificar deberia dar vuelta ambas palabras y estaria

        //tengo que cortar el string en strings de un solo par de palabras para guardarlos en el arbol

        //string[] word = words.split('/t');
//        splitAndPut(words);


        split(words);

        //aca deberia mandar las palabras cortadas al arbol
//         dic.put(words); //aca estoy creando un arbol de un solo elemento


        //cout << words << endl;  //aca deberiamos buscar en el arbol cada palabra que vayamos sacando para escribirla en el archivo de salida a continuacion
        //funcion para buscar la palabra en el arbol y que me devuelva la palabra codificada
        //al agregar el texto en un archivo ya existente cada vez que entre al programa deberia de borrar lo que exista en el


    }
    dictionary.close();//cerramos el archivo

    //aca abajo muestro el arbol
    cout << endl << "muestro el arbol por consola (preorder): "<<endl;

    dic.inorder();

    cout << endl;

}



//codificar
//encode(rutaA, rutaD, rutaI);
//(entrada,diccionario,salida)
void encode(string in, string dic, string out,int option) {
//    ifstream fileDic(dic);  //inicializamos diccionario
//    ifstream diccionario;
//    ifstream fileArc(in);  //              entrada
//    ofstream fileImp(out);  //              salida
//    string str;             //  ?
    string words;            //  la uso para copiar el contenido de los archivos de texto y guardarlos dentro de esta variable


    // antes de comenzar con el programa en si deberiamos crear los arboles para luego tenerlos a mano


    //    creararbol(words, option);



//    void arbolencode(out); //funcion para crear el arbol de codificado

//-----------------------------------------------//IMPORTANTE: LOS ARCHIVOS CREADOS/LEIDOS ESTAN EN LA CARPETA cmake-build-debug/intento2-----------------------------------------------------------------------



//estoy probando leer archivos
    ifstream entry;
    entry.open(in,ios::in);//abrimos el archivo en modo lectura
    //direccion del archivo de entrada /home/facu/CLionProjects/proyecto/intento2/entrada.txt
    if(entry.fail()){
        cout << "No se pudo abrir el archivo de entrada";
        exit(1);
    }

    while(!entry.eof()) { //mientras no sea final del archivo
        getline(entry,words);

        cout << "while de encode" << endl;
        cout << words << endl;  //aca deberiamos buscar en el arbol cada palabra que vayamos sacando para escribirla en el archivo de salida a continuacion
        //funcion para buscar la palabra en el arbol y que me devuelva la palabra codificada
        //al agregar el texto en un archivo ya existente cada vez que entre al programa deberia de borrar lo que exista en el
    }

    //------------------------------------------------------------------------------------------------------------//escribir en el archivo de salida
    salida(words,out);  //esta funcion es la que me escribe el archivo salida.txt
    //salida (palabra,direccion del archivo)

    entry.close();//cerramos el archivo

}




//------------------------------------ decode funciona igual que code, solo que debo buscar al reves en el arbol o en otro arbol diferente
//decode(rutaA, rutaD, rutaI);
//(entrada,diccionario,salida)
void decode(string in, string dic, string out) {
//    ifstream fileDic(dic);  //inicializamos diccionario
//    ifstream diccionario;
//    ifstream fileArc(in);  //              entrada
//    ofstream fileImp(out);  //              salida
//    string str;             //  ?
    string words;            //  la uso para copiar el contenido de los archivos de texto y guardarlos dentro de esta variable

    // antes de comenzar con el programa en si deberiamos crear los arboles para luego tenerlos a mano

//    void arboldecode(out); //funcion para crear el arbol de decodificado

//-----------------------------------------------//IMPORTANTE: LOS ARCHIVOS CREADOS/LEIDOS ESTAN EN LA CARPETA cmake-build-debug/intento2-----------------------------------------------------------------------



//estoy probando leer archivos
    ifstream entry;
    entry.open(in, ios::in);//abrimos el archivo en modo lectura
    //direccion del archivo de entrada /home/facu/CLionProjects/proyecto/intento2/entrada.txt
    if (entry.fail()) {
        cout << "No se pudo abrir el archivo de entrada";
        exit(1);
    }

    while (!entry.eof()) { //mientras no sea final del archivo
        getline(entry, words);
        cout << words << endl;  //aca deberiamos buscar en el arbol cada palabra que vayamos sacando para escribirla en el archivo de salida a continuacion
        //funcion para buscar la palabra en el arbol y que me devuelva la palabra codificada
        //al agregar el texto en un archivo ya existente cada vez que entre al programa deberia de borrar lo que exista en el
        //------------------------------------------------------------------------------------------------------------//escribir en el archivo de salida
        salida(words, out);  //esta funcion es la que me escribe el archivo salida.txt
        //salida (palabra,direccion del archivo)

    }
    entry.close();//cerramos el archivo
}

void salida(string words, string out) {

    cout << "entre a la funcion salida" << endl;
    ofstream salida;
    salida.open(out, ios::app); //abrimos el archivo en modo añadir texto

    if (salida.fail()) {
        cout << "No se pudo abrir el archivo";
        exit(2);
    }

    salida << " ";    //pongo el espacio para separar las palabras o futuras frases a ingresar
    salida << words; // le mando la palabra que me envia la llamada a la funcion      /DEBERIA sustituirla por la palabra ya codificada
    salida.close();//cerramos el archivo


    /*
    ofstream salida;
    salida.open("/home/facu/CLionProjects/proyecto/cmake-build-debug/intento2/salida.txt",ios::app); //abrimos el archivo en modo añadir texto

    if(salida.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(2);
    }

    salida<<" ";    //pongo el espacio para separar las palabras o futuras frases a ingresar
    salida<<"hola facu"; //a esto me lo escribe dos veces, porque?
    salida.close();//cerramos el archivo
    */
}

/*
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

    if (cod==true){
        aCod.Insertar(word[1], word[0]);
    } else {
//        aDesc.Insertar(word[1], word[0]);
    }

    cout << word[0]  << endl; // desc
    cout << word[1]  << endl; // cod
}
*/