#include <bits/stdc++.h>
using namespace std;

#define forik(i, j, k, in) for (int i=j; i<k; i+=in)
#define forn(n, in) for (int i=0; i<n; i+=in)
typedef long long int lli;

vector <lli> vll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    lli n=4;
    int num[4];
    forn(n, 1){
        cin>>num[i];
    }
    sort(num, num+n);
    forn(n, 1)
        cout<<num[i]<<" ";
    return 0;
}
