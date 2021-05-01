#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k; cin>>n>>k;
    string cadena; cin>>cadena;
    vector<string> stringvec;
    string f, uno, dos;
    for(int i=0; i<cadena.size(); i+=k){
        uno = cadena[i];
        for(int j=i+1; j<i+k; j++){
            if(j<cadena.size()){
                uno = uno+cadena[j];
            }
        }
        stringvec.push_back(uno);
    }
    sort(stringvec.begin(), stringvec.end());
    for( string &s : stringvec){
            cout<<s<<"\n";
    }
    return 0;
}
