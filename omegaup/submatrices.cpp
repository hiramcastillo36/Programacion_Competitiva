#include <bits/stdc++.h>
#define MAX 1005
int matriz_m[MAX][MAX];
int matriz_n[MAX][MAX];
bool final[MAX][MAX];

using namespace std;

int checar_marcar(int posx, int posy, int r, int c){
    int k=0, d=0, aux;
    for(int i=posx; i<posx+r; i++,k++){
        d=0;
        for(int j=posy; j<posy+c; j++, d++){
            if(matriz_m[i][j]!=matriz_n[k][d])
                return 0;
            
        }
        
    }
    
    for(int i=posx; i<posx+r; i++, k++){
        for(int j=posy; j<posy+c; j++, d++){
            final[i][j]=1;
        }
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ren, col, r , c;
    cin>>ren>>col;
    for(int i=0; i<ren; i++){
        for(int j=0; j<col; j++){
            cin>>matriz_m[i][j];
        }
    }
    cin>>r>>c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>matriz_n[i][j];
        }
    }
    for(int i=0; i<ren; i++){
        for(int j=0; j<col; j++){
            if(matriz_m[i][j]==matriz_n[0][0]){
                checar_marcar(i, j, r, c);
                //cout<<"entro: "<<i<<" "<<j<<"\n";
            }
        }
    }
    for(int i=0; i<ren; i++){
        for(int j=0; j<col; j++)
            cout<<final[i][j]<<" ";
        cout<<"\n";
    }
} 