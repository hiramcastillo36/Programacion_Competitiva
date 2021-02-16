#include <bits/stdc++.h>
#define MAX 10
int cuadro_uno[MAX];
int cuadro_dos[MAX];
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int minx, maxx, miny, maxy, area_max, area_uno, area_dos, res_uno, res_dos;
    for(int j=0; j<4; j++)
        cin>>cuadro_uno[j];
    for(int j=0; j<4; j++)
        cin>>cuadro_dos[j];
    if(cuadro_uno[0]>cuadro_dos[0]){
        for(int i=0; i<4; i++){
            int aux=cuadro_uno[i];
            cuadro_uno[i]=cuadro_dos[i];
            cuadro_dos[i]=aux;
        }
        minx=min(cuadro_uno[0], cuadro_uno[2]);
    maxx=max(cuadro_uno[0], cuadro_dos[2]);
    miny=min(cuadro_uno[1], cuadro_dos[3]);
    maxy=max(cuadro_uno[1], cuadro_dos[3]);
    //cout<<minx<<" "<<maxx<<"\n";
    //cout<<miny<<" "<<maxy<<"\n";
    if(cuadro_uno[1]<cuadro_dos[1]&&cuadro_uno[3]<cuadro_dos[3]){
    area_max=abs((maxx-minx) * (maxy-miny));
        
    }
    else {
        minx=min(cuadro_uno[0], cuadro_uno[0]);
        miny=min(cuadro_uno[1], cuadro_dos[1]);
        maxx=max(cuadro_uno[2], cuadro_dos[2]);
        maxy=max(cuadro_uno[3], cuadro_dos[3]);
        area_max=abs((maxx-minx) * (maxy-miny));
    }
    
    area_uno=abs((cuadro_uno[0]-cuadro_uno[2]) * (cuadro_uno[1] - cuadro_uno[3]));
    area_dos=abs((cuadro_dos[0]-cuadro_dos[2]) * (cuadro_dos[1] - cuadro_dos[3]));
    res_uno=abs((cuadro_uno[0]-cuadro_dos[0]))*abs((cuadro_dos[1]-cuadro_uno[1]));
    res_dos=abs((cuadro_uno[3]-cuadro_dos[3]))*abs((cuadro_uno[2]-cuadro_dos[2]));
    } else {

     //cambio
    minx=min(cuadro_uno[0], cuadro_uno[2]);
    maxx=max(cuadro_uno[0], cuadro_dos[2]);
    miny=min(cuadro_uno[1], cuadro_dos[3]);
    maxy=max(cuadro_uno[1], cuadro_dos[3]);
    //cout<<minx<<" "<<maxx<<"\n";
    //cout<<miny<<" "<<maxy<<"\n";
    if(cuadro_uno[1]<cuadro_dos[1]&&cuadro_uno[3]<cuadro_dos[3]){
    area_max=abs((maxx-minx) * (maxy-miny));
        
    }
    else {
        minx=min(cuadro_uno[0], cuadro_uno[0]);
        miny=min(cuadro_uno[1], cuadro_dos[1]);
        maxx=max(cuadro_uno[2], cuadro_dos[2]);
        maxy=max(cuadro_uno[3], cuadro_dos[3]);
        area_max=abs((maxx-minx) * (maxy-miny));
    }
    
    area_uno=abs((cuadro_uno[0]-cuadro_uno[2]) * (cuadro_uno[1] - cuadro_uno[3]));
    area_dos=abs((cuadro_dos[0]-cuadro_dos[2]) * (cuadro_dos[1] - cuadro_dos[3]));
    res_uno=abs((cuadro_uno[1]-cuadro_dos[1]))*abs((cuadro_dos[2]-cuadro_uno[2]));
    res_dos=abs((cuadro_uno[3]-cuadro_dos[3]))*abs((cuadro_uno[0]-cuadro_dos[0]));
    }
    if(cuadro_dos[1]-cuadro_uno[3]<=0){
        if((res_uno+res_dos+area_uno+area_dos)>area_max){
            cout<<((area_uno+area_dos)+(area_max-(res_uno+res_dos+area_uno+area_dos)));
            //cout<<"\n"<<((area_uno+area_dos)-(area_max-(res_uno+res_dos+area_uno+area_dos)))+res_uno+res_dos<<" "<<res_uno<<" "<<res_dos<<" "<<area_uno<<" "<<area_dos<<" "<<area_max;
        }
        else
            cout<<area_uno+area_dos;
    }
    else
        cout<<area_uno+area_dos;
    //cout<<area_dos+area_uno;
}