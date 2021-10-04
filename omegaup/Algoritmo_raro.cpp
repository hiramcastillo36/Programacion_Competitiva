#include <bits/stdc++.h>
using namespace std;

#define forik(i, j, k, in) for (int i=j; i<k; i+=in)
#define forn(n, in) for (int i=0; i<n; i+=in)
typedef long long int lli;

vector <lli> vll;

long long int solve(long long int n){
    cout<<n<<" ";
    if(n==1)
        return 0;
    else if(n%2){
        solve(n*3+1);

    } else {
        solve(n/2);
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    long long int n; cin>>n;
    solve(n);
    return 0;
}
