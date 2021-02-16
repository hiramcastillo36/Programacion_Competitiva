#include <iostream>
#include <string>
using namespace std;

int main(){
    //65 90 97 122
    string cadena, copia;
    getline(cin, cadena);
    for(int i=0; i<cadena.size(); i++){
        if((cadena[i]>='a'&&cadena[i]<='z')||(cadena[i]==' ')||(cadena[i]>='A'&&cadena[i]<='Z'))
            cout<<cadena[i];
    }
}
