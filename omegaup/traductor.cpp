#include <iostream>
#define MAX 10010
int numi[MAX];
int ente[MAX];
int mtx[1005][1005];
using namespace std;

int pos(int d, int xd){
    for(int j=0; j<d; j++){
        if(mtx[j][0]==xd)
            return j;
    }
    return -1;
}

int main(){
    int d, w, pos1, pos2, xd;
    cin>>d>>w;
    for(int i=0; i<d; i++)
        for(int j=0; j<2; j++)
            cin>>mtx[i][j];
    for(int i=0; i<w; i++){
        cin>>xd;
        pos1=pos(d, xd);
        if(pos1!=-1){
            cout<<mtx[pos1][1];
        }
        else {
            cout<<"C?";
        }
        cout<<"\n";
    }
    return 0;
}