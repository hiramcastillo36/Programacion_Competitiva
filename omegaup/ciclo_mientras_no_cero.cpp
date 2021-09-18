#include <bits/stdc++.h>
using namespace std;

#define forik(i, j, k, in) for (int i=j; i<k; i+=in)
#define forn(n, in) for (int i=0; i<n; i+=in)
typedef long long int lli;

vector <lli> vll;

void solve(){
    int n, suma=0;
    do{
        cin>>n;
        suma += n;
    }while(n!=0);
    cout<<suma;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}
