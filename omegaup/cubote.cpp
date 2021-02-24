#include <bits/stdc++.h>
#define MAX 300010
int caras[MAX];
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, suma5caras, posmax, nummax;
    cin>>n;
    for(int i=0; i<6; i++){
        cin>>caras[i]; 
    }
    nummax = caras[0];
    posmax = 0;
    for(int i=0; i<6; i++){
        if(caras[i]>nummax){
            nummax = caras [i];
            posmax=i;
        }
    }
    cout<<nummax<<" "<<posmax; 
 }