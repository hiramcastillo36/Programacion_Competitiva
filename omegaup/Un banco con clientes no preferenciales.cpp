#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    queue<string> estatus; // queue = cola primero-primero
    stack <string> morosos; // stack = pila LIFO
    char orden;
    string cliente;
    int n, k, a, b; cin>>n;
    for(int i=0; i<n; i++){
        cin>>orden>>k;
        if(orden=='E'){
            cin>>cliente;
            if(k==1){
                estatus.push(cliente);
            }else {
                morosos.push(cliente);
            }
        }else {
            if(k==1){
                cout<<estatus.front();
                estatus.pop();
            }else {
                cout<<morosos.top();
                morosos.pop();
            }
            cout<<"\n";
        }
    }
}
