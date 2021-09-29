#include <bits/stdc++.h>
using namespace std;

#define forik(i, j, k, in) for (int i=j; i<k; i+=in)
#define forn(n, in) for (int i=0; i<n; i+=in)
typedef long long int lli;

vector <lli> vll;
vector <lli> vec;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    lli n; cin>>n;
    lli ni, con=0;
    forn(n, 1){
        cin>>ni; vll.push_back(ni);
    }
    sort(vll.begin(), vll.end());
    for(int i=0; i<n; ++i){
        if(vll[i]!=vll[i+1])
            con++;
    }
    cout<<con;
    return 0;
}
