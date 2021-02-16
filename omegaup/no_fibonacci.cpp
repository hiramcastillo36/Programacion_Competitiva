#include <bits/stdc++.h>
#define MAX 300010
long long int fib[MAX];
using namespace std;

void fibo(int n){
    long long int a=1, b=1, c=0, i=0;
    while(i<=n){
        c=a+b;
        //fib[i]=c;
        fib[i]=c;
        a=b;
        b=c;
        i++;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, i=0;
    cin>>n;
    fibo(n);
    while(n-i>=1&&fib[i]<n){
        for(int j=fib[i]; j<fib[i+1]; j++){
            if(j<n&&j!=fib[i])
                cout<<j<<" ";
        }
        i++;
    }
}