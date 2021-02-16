#include <iostream>
#define MAX 110
int cubetas[MAX];
int aux[MAX];
using namespace std;

void numero(int n, int m){
    for(int i=1; i<=n; i++){
            aux[cubetas[i]]+=1;
    }
    for(int i=1; i<=m; i++)
        cout<<i<<": "<<aux[i]<<"\n";
}

int main(){
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>cubetas[i];
    numero(n, m);
}
