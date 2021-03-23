#include <bits/stdc++.h>
using namespace std;

int main(){
    //ios_base::sync_with_stdio(0); cin.tie(0);
    // queue<int> cola;
    stack <long> pila;
    string orden;
    long n, k, a, b; cin>>n;
    for(int i=0; i<n; i++){
        cin>>orden;
        if(orden=="AGREGA"){
            cin>>k;
            pila.push(k);
        }else if(orden=="CONSUME"){
            a=pila.top();
            pila.pop();
            b=pila.top();
            pila.pop();
            pila.push(a+b);
        }else if(orden=="IMPRIME"){
            cout<<pila.top()<<"\n";
        }
    }
}
