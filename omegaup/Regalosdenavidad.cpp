#include <iostream>
using namespace std;

int navidad(int n, int k, int l){
    int resultado, mod;
    if(n!=0&&k!=0&&l!=0){
        mod=k%n;
        if(mod>=l)
            return -1;
        else
            return abs((k%n)-l);
    }
    else {
        if(l==0||n==0&&k>=l){
            return -1;
        }
        else if(k==0){
            return l;
        }
    }
}


int main(){
    int n, k, l, rest;
    cin>>n>>k>>l;
    rest=navidad(n, k, l);
    if(rest==-1)
        cout<<"SI";
    else   
        cout<<rest;
    return 0;
}