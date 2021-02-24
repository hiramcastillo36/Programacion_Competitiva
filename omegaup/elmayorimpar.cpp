#include <bits/stdc++.h>
#define MAX 300010
int fib[MAX];
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=0; i<5; i++)
        cin>>fib[i];
    sort(fib, fib+5);
    for(int i=4; i>=0; i--){
        if((fib[i]-1)%2==0){
            cout<<fib[i];
            return 0;
        }
    }
}