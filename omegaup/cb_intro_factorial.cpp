#include <bits/stdc++.h>
using namespace std;

long long int fact(int n){
    if(n > 0)
        return fact(n-1)*n;
    else
        return 1;
}

int main(){
    int n; cin>>n;
    cout<<fact(n);
}
