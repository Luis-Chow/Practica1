#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string data;
    ifstream input("./data/data.txt");

    while (getline(input, data)) { 
        stringstream x(data);
        string nombre, cedula, correo;

        if (getline(x, nombre, ' ') && getline(x, cedula, ' ') && getline(x, correo, ' ')) {
            cout<<"Mi nombre es "<<nombre<<", Mi numero de cedula: "<<cedula<<", Mi correo es "<<correo<<endl;
        }
    }

    input.close();
    return 0;
}