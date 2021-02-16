#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, f, g, am;
    string nombre;
    cin>>n>>f;
    for(int i=0; i<n; i++){
        cin>>nombre>>g;
        am=(tolower(nombre[0])-97)+1;
        if((am*g)>=f)
            cout<<"el robot de "<<nombre<<" si pasa";
        else
            cout<<"el robot de "<<nombre<<" no pasa";
        cout<<"\n";
    }
}
