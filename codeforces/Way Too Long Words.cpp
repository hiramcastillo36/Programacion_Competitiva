#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string cadena;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>cadena;
        if(cadena.length() > 10)
            cout<<cadena[0]<<cadena.length()-2<<cadena[cadena.length()-1]<<"\n";
        else
            cout<<cadena<<"\n";
    }
}