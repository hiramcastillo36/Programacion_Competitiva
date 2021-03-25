#include <bits/stdc++.h>
using namespace std;
int contador;

int fib(int n){
    contador++;
    if(n >= 2)
        return fib(n-1)+fib(n-2);
    else if(n==1)
        return 1;
    else
        return 0;
}

int main(){
    int n; cin>>n;
    cout<<fib(n)<<" "<<contador;
}
