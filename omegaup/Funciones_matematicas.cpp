#include<stdio.h>
#include<iostream>
#include<cmath>
#define MAX 1005
int arreglo[MAX];
int guardar[MAX];
float cagada[MAX];
using namespace std;

int valor_absoluto(int v0, int i){
    guardar[i]=v0*(-1);
}
int maximo(int v1, int v2, int i){
    if(v1>v2)
        guardar[i]=v1;
    else
        guardar[i]= v2;
}
int minimo(int v1, int v2, int i){
    if(v1<v2)
        guardar[i]=v1;
    else
        guardar[i]=v2;
}
double raiz(double v0){
    double v;
    v=sqrt(v0);
    return v;
}
long long int potencias(int v1, int v2){
    long long int pt;
    pt=pow(v1, v2);
    return pt;
}
float v(int i){
    printf("%.2f",cagada[i]);
}

int main(){
    int n, v1, v2, v0, x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x==1){
            cin>>v0;
            cout<<abs(v0);
        }
        else if(x==2){
            cin>>v1>>v2;
            cout<<max(v1, v2);
        }
        else if(x==3){
            cin>>v1>>v2;
            cout<<min(v1, v2);
        }
        else if(x==4){
            float xd;
            cin>>v0;
            xd = sqrt(v0);
            printf("%.2f",xd);
        }
        else if(x==5){
            cin>>v1>>v2;
            cout<<potencias(v1, v2);
        }
        cout<<"\n";
    }
    return 0;
}