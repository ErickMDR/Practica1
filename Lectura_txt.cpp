#include<iostream>
#include<fstream>

using namespace std;

int main(){

    string nombre;
    string cedula;
    string correo;
    ifstream input("../DATA/data.txt");

    if(!input.is_open()){
        cout<<"No se puede abrir"<<endl;
        return 0;
    }

    while(input>>nombre>>cedula>>correo){
    cout<<"Mi nombre es "<<nombre<<", numero de cedula: "<<cedula<<", mi correo es "<<correo<<endl;
    }

    input.close();

    return 0;
}