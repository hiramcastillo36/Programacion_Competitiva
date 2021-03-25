#include <bits/stdc++.h>
using namespace std;

vector <long long int> fib;
vector <long long int> llamadas;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, aux=10, fibu; cin>>n;
    for(int i=0; i<4; i++){
        fib.push_back(10);
        llamadas.push_back(1);
    }
    llamadas.push_back(1);
    llamadas.push_back(1);
    llamadas.push_back(2);
    llamadas.push_back(2);
    for(int i=5; i<=n*2; i+=2){
        fib.push_back(fib[i-2]+fib[i-4]);
        fib.push_back(fib[i-2]+fib[i-4]);
    }
    for(int i=8; i<=n*2; i+=2){
        llamadas.push_back(llamadas[i-2]+llamadas[i-4]+1);
        llamadas.push_back(llamadas[i-2]+llamadas[i-4]+1);
    }
    cout<<fib[n]+llamadas[n]*30;
}
