#include <bits/stdc++.h>
using namespace std;

#define forik(i, j, k, in) for (int i=j; i<k; i+=in)
#define forn(n, in) for (int i=0; i<n; i+=in)
typedef long long int lli;

vector <lli> vll;

void solve(int c, int p, int h){
    if(c!=0){
        if(h != 0 && p != 0 )
            cout<<(c-p)+((c-p)%h);
        if(h != 0 && p==0)
            cout<<((c-p)%h);
        if(h==0 && p == 0)
            cout<<p;
    } else
        cout<<"0";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int c, p, h;
    cin>>c>>p>>h;
    solve(c, p, h);
    return 0;
}
