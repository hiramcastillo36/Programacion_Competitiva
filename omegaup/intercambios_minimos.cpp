#include <bits/stdc++.h>
using namespace std;

#define forik(i, j, k, in) for (int i=j; i<k; i+=in)
#define forn(n, in) for (int i=0; i<n; i+=in)
typedef long long int lli;

vector <lli> vll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    lli x,y,z;
    cin>>x>>y>>z;
    if(x<y&&y<z||x==0&&y==0&&z==0||x==0&&y==0&&z!=0)
        cout<<"0";
    else if(x<z&&y<x||x<y&&y>z&&y-x>1||x>y&&y>z||x==0&&y!=0&&z==0||x!=0&&y==0&&z==0)
        cout<<"1";
    else
        cout<<"2";
    return 0;
}
