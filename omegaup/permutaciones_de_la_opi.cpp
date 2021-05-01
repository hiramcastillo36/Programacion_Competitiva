#include <bits/stdc++.h>
using namespace std;

#define forik(i, j, k, in) for (int i=j; i<k; i+=in)
#define forn(n, in) for (int i=0; i<n; i+=in)
typedef long long int lli;

vector <lli> vll;
vector<string> stringvec;
vector<string> respaldovec;
int i=0;
string k;
string cadena;

int solve(string s){
    for ( string y : stringvec){
        i++;
        if (s==cadena&&y==cadena)return -1;
        if(s == y ){
            vll.push_back(i);
        }
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    lli n; cin>>n;
    cin>>cadena;

    stringvec.push_back(cadena);
    forn(n, 1){
        cin>>k;
        stringvec.push_back(k);
        respaldovec.push_back(k);
    }
    sort(stringvec.begin(), stringvec.end());

    for( string s : respaldovec){
        i=0;
        if(solve(s)==-1)
            vll.push_back(i+1);
    }
    for(auto i = vll.begin(); i!=vll.end()-1; ++i){
        cout<<*i<<"\n";
    }
    cout<<vll.back();
    return 0;
}
