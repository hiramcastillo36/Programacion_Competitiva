#include <iostream>
using namespace std;

int main(){
    int n, contador=0;
    cin>>n;
    while(((n-1)%11)){
        n=n*2;
        contador++;
    }
    cout<<contador<<" "<<n;
    return 0;
}