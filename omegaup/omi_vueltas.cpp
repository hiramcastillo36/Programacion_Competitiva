#include <iostream>
#define MAX 1500
int mx[MAX][MAX];
using namespace std;

void h(int n, int m){
    int r=1;
     for(int i=1; i<=n; i++){
        r=1;
        for(int j=m; j>m/2; j--){
            int aux=mx[i][r];
            mx[i][r]=mx[i][j];
            mx[i][j]=aux;
            r=r+1;
        }
    }
}

void v(int n, int m){
    int r=1;
     for(int i=1; i<=m; i++){
        r=1;
        for(int j=n; j>n/2; j--){
            int aux=mx[r][i];
            mx[r][i]=mx[j][i];
            mx[j][i]=aux;
            r=r+1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    int con1=0;
    int cont2=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>mx[i][j];
        }
    }
    int k;
    cin>>k;
    char lt;
    for(int i=0; i<k; i++){
        cin>>lt;
        if(lt=='H'){
        //h(n,m);
            con1=con1+1;
        // v(n,m);
        }
        else{
            cont2=cont2+1;
        //   v(n,m);
        }
    }

    if(con1%2!=0)
        h(n,m);
    if(cont2&2!=0)
        v(n,m);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<mx[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
