#include <bits/stdc++.h>
#define MAX 55
int soldados_mios[MAX];
int soldados_doc[MAX];
using namespace std;

int checarrestanes(int i, int j, int n, int suma){
    //cout<<soldados_mios[j]<<" "<<soldados_doc[4];
    for(int k=i; k>=0; k--){
        if(soldados_mios[j]>soldados_doc[k]){
                //cout<<suma+soldados_mios[j];
                return soldados_mios[j];
        }
    }
    
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, suma=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>soldados_mios[i];
    for(int i=0; i<n; i++)
        cin>>soldados_doc[i];
    sort(soldados_mios, soldados_mios+n);
    sort(soldados_doc, soldados_doc+n);
    for(int i=0, j=n-1; i<n, j>=0; i++, j--){
        if(soldados_mios[j]>soldados_doc[i]){
            suma+=soldados_mios[j];
            //cout<<"entro";
        }
        else if(soldados_mios[j]==soldados_doc[i]){
            suma+=checarrestanes(i, j, n, suma);     
            //cout<<i<<" "<<j<<" " <<suma<<"\n"; 
            
        }
    }
    cout<<suma;
} 