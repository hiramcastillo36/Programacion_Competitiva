#include <bits/stdc++.h>
using namespace std;

#define forik(i, j, k, in) for (int i=j; i<k; i+=in)
#define forn(n, in) for (int i=0; i<n; i+=in)
typedef long long int lli;

vector <lli> vll;

void solve(int n){
    int a, par=0, impar=0;
    forn(n, 1){
        cin>>a;
        if(a%2==0)
            par++;
        else
            impar++;
    }
    cout<<par<<" "<<impar;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin>>n;
    solve(n);
    return 0;
}
