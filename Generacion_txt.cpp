#include<iostream>
#include<fstream>

using namespace std;

int main(){

    int x=0;
    string nombre;
    string cedula;
    string correo;
    ofstream output("../DATA/data.txt");

    if(!output.is_open()){
        cout<<"No se puede abrir ni crear el archivo"<< endl;
        return 0;
    }

    cout<<"Cantidad de datos a ingresar: ";
    cin>>x;

    while(x>0){

    cout<<"Ingrese sus datos"<<endl;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Cedula: ";
    cin>>cedula;
    cout<<"Correo: ";
    cin>>correo;

    output<<nombre<<" "<<cedula<<" "<<correo<<endl;
    x--;
    }

    return 0;
}
