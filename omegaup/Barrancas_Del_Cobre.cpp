#include <iostream>
#include <algorithm>
#define MAX 100000
int ba[MAX];
int emosi[MAX];
int emo, pos;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k,a,b, max_emocion=0;
    cin>>n>>k;
    pos=1;
    int contador=0;
    for(int i=0; i<n; i++)
        cin>>ba[i];
        int i=k-1;
    while(i<n){
       i++;
        max_emocion=max(max_emocion, ba[i]-ba[i-k+1]);
        
    }
  //  for(int i=0; i<pos; i++)
   //     cout<<emosi[i]<<" ";
    //cout<<endl;
    
    //for(int i=0; i<pos; i++)
        //cout<<emosi[i]<<" ";
    cout<<max_emocion;
}