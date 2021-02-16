#include <bits/stdc++.h>
#include <string>
using namespace std;
string cadena, nuevostring, cadena_final;

void inicio(){
    cadena_final=nuevostring+cadena_final;
    //cout<<"cadena final: "<<cadena_final<<" \n";
}
void final(){
    cadena_final=cadena_final+nuevostring;
   // cout<<"cadena final: "<<cadena_final<<" \n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin, cadena);
    int xd;
    cadena[cadena.length()+1]='0';
    for(int i=0; i<cadena.length(); i++){
        if(cadena[i]=='['){
            xd=i+1;
            nuevostring.clear();
            while(cadena[xd]!='['&&cadena[xd]!=']'&&xd<cadena.length()){
                //cout<<cadena[xd]<<" ";
                nuevostring+=cadena[xd];
                xd++;
            }
            i=xd-1;
            //cout<<"\n"<<nuevostring;
            inicio();
        }
        else if(cadena[i]==']'){
            xd=i+1;
            nuevostring.clear();

            while(cadena[xd]!='['&&cadena[xd]!=']'&&xd<cadena.length()){
                //cout<<cadena[xd]<<" segundo";
                nuevostring+=cadena[xd];
                xd++;
            }
            i=xd-1;
            final();
        }
        else {
            nuevostring.clear();
            nuevostring+=cadena[i];
            final();
        }
    }
    //cout<<"\n";
    cout<<cadena_final;
} 