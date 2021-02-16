#include <iostream>
#define MAX 105
int alum[MAX];
using namespace std;

int main(){
    int n, f, g, am, ma=0;
    cin>>n>>f;
    for(int j=0; j<f; j++)
        for(int i=0; i<n; i++){
            cin>>g;
            if(g){
            alum[i]=alum[i]+g;
            ma=max(ma, alum[i]);
            }
        }
    for(int i=0; i<n; i++){
        //cout<<alum[i];
        if(alum[i]==ma&&ma!=0)
            cout<<i+1<<" ";
    }
}
/*
3 4
1 1 1
1 1 0
1 1 0
0 0 0
*/
