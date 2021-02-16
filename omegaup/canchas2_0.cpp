#include <bits/stdc++.h>
#define MAX 10005
int cuadro_uno[MAX];
int cuadro_dos[MAX];
long long int relleno[MAX][MAX];
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int minx, maxx, miny, maxy, area_max, area_uno, area_dos, res_uno, res_dos, total=0;
    for(int j=0; j<4; j++)
        cin>>cuadro_uno[j];
    for(int j=0; j<4; j++)
        cin>>cuadro_dos[j];
    minx = min(cuadro_uno[0], cuadro_dos[0]);
    miny = min(cuadro_uno[1], cuadro_dos[1]);
    maxx = max(cuadro_uno[2], cuadro_dos[2]);
    maxy = max(cuadro_uno[3], cuadro_dos[3]);
    area_max = area_max=abs((maxx-minx) * (maxy-miny));
    for(int i=cuadro_uno[1]; i<cuadro_uno[3]; i++){
        for(int j=cuadro_uno[0]; j<cuadro_uno[2]; j++){
            if(relleno[i][j]==0){
                total++;
                relleno[i][j]=1;
            }
        }
    }
    for(int i=cuadro_dos[1]; i<cuadro_dos[3]; i++){
        for(int j=cuadro_dos[0]; j<cuadro_dos[2]; j++){
            if(relleno[i][j]==0){
                total++;
                relleno[i][j]=1;
            }
        }
    }
    cout<<total;
} 