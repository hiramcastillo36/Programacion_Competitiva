#include <iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    if(n==3||n==2){
        cout<<"NO SOLUTION";
    }
    else {
    for(int i=1; i<=n; i++)
        if(i%2==0)
            cout<<i<<" ";
    for(int i=1; i<=n; i++)
        if(i%2)
            cout<<i<<" ";
    }
        
    return 0;
}