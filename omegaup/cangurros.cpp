#include<iostream>
#include <string>
#include<queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    queue <int> cola;
    queue <int> cp;
    char caracter;
    int c, n, x, contador=0;
    cin>>c>>n;
    for(int i=0; i<n; i++){
        cin>>caracter;
        if(caracter=='N' ){
            cin>>x;
            cp.push(1);
            cola.push(x+1);
        }
        if(caracter=='A'){
            int cuantos;
            cuantos=cola.front();
            c=c-cuantos;
            if(!cola.empty())cola.pop();
            if(!cp.empty())cp.pop();
        }
        if(caracter=='C'){
            cout<<cp.size()<<"\n";
        }
        if(caracter=='R'){
            cout<<c<<"\n";
        }
    }
}
