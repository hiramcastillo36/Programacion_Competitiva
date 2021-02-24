#include <iostream>
#include <algorithm>
#define MAX 300000
int ar[MAX];
using namespace std;

int main(){
    int n, fal;
    cin>>n;
    for(int i=1; i<n; i++)
        cin>>ar[i];
    sort(ar, ar+n+1);
    for(int i=1; i<=n; i++){
        if(ar[i]!=i)
            fal=i;
    }
    cout<<fal;
    return 0;
}