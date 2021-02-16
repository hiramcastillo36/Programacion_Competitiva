#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string num;
    int suma=0;
    cin>>num;    
    for(int pos:num)
        suma+=(pos-48);
    cout<<suma;
}