#include <bits/stdc++.h>
#define MAX 1000005
int diamantes[MAX];
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, intentos, suma, maxsuma; 
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>diamantes[i];
    cin>>intentos;
    for(int i=0; i<n; i+intentos)
        cin>>diamantes[i];
}
