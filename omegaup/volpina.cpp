#include <bits/stdc++.h>
#define MAX 100000
int num[MAX];
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    for(int i=0; i<n; i++)
        cin>>num[i];
    long long int multi=1;
    for(int i=0; i<n; i++){
        multi=1;
        for(int j=1; j<=n; j++){
            if(j!=num[i])
                multi=multi*j;
        }
        cout<<multi<<" ";
    }
    return 0;
}
