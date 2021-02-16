#include <iostream>
#include <string>
#define MAX 100
int ar[MAX];
using namespace std;

bool checar(){
    for(int i=0; i<26; i++){
        if(ar[i]==0)
            return 0;
    }
    return 1;
}

int main(){
    //65 90 97 122
    int n;
    cin>>n;
    string cadena, copia;
    int contador=0;
    for(int i=0; i<n; i++){
        cin>>cadena;
        contador=0;
        for(int i=0; i<cadena.size(); i++){
            if((cadena[i]>='a'&&cadena[i]<='z'))
                ar[cadena[i]-97] = ar[cadena[i]-97] + 1;

        }
            if(checar())
                cout<<"PERFECT";
            else
                cout<<"NO WAY";
    cout<<"\n";
        for(int i=0; i<50; i++)
            ar[i]=0;
    }
}
