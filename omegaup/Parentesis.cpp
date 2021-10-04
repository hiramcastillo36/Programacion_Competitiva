#include<iostream>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string cadena;
    cin>>cadena;
    int contador=0;
    int con=0;
    int con2=0;
    for(int i=0; i<cadena.length(); i++){
        if(cadena[i]=='(')
            con++;
        if(cadena[i]==')'){
            con--;
        }
        if(con<0){
            cout<<"NO";
            return 0;
        }
	}
	if(con==0){
        cout<<"SI";
	}
	else
        cout<<"NO";
}
