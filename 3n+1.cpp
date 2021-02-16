#include <iostream>
using namespace std;

int buscar(int n){
    int maxi=1;
    int conta=0;
    while(n!=1){
        maxi=max(n, maxi);
        conta=conta+1;
        if(n%2==0)
            n=n/2;
        else
            n=n*3+1;
    }
    cout<<conta<<" ";
    cout<<maxi;
    return 0;
}

int main(){
    int n;
    cin>>n;
    buscar(n);
}