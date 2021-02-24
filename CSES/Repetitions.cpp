#include <iostream>
#include <string>
using namespace std;

int main(){
    int contador=1,aux, maxi=0;
    string cadena;
    cin>>cadena;
    for(int i=1; i<=cadena.length(); i++){
        if(cadena[i-1]==cadena[i]){
            contador++;
        }
        else {
            contador=1;
        }
        maxi=max(contador, maxi);
    }
    cout<<maxi;
    return 0;
}