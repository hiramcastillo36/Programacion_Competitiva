#include <bits/stdc++.h>
#define MAX 300010
int fib[MAX];
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(n==61){
        cout<<"Brasilia";
    }else if(n==71){
        cout<<"Salvador";
    }else if(n==11){
        cout<<"Sao Paulo";
    }else if(n==21){
        cout<<"Rio de Janeiro";
    }else if(n==32){
        cout<<"Juiz de Fora";
    }else if(n==19){
        cout<<"Campinas";
    }else if(n==27){
        cout<<"Vitoria";
    }else if(n==31){
        cout<<"Belo Horizonte";
    }else {
        cout<<"LD no encontrada";
    }

}