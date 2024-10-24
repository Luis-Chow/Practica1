#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int dato;
    string nombre;
    int cedula;
    string correo;

    ofstream output("./data/data.txt");

    cout<<"Cuantos usuarios va a registrar? (Numeros enteros)"<<endl;
    cin>>dato;

    for(int i=0; i<dato; i++){
        cout<<"Introduzca el nombre"<<endl;
        cin>>nombre;
        cout<<"Introduzca la cedula"<<endl;
        cin>>cedula;
        cout<<"Introduzca el correo"<<endl;
        cin>>correo;
        output<<nombre<<" ";
        output<<cedula<<" ";
        output<<correo<<endl;
    }
    output.close();
    return 0;
}