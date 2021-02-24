#include <iostream>
#define MAX 300000
int ar[MAX];
using namespace std;

int main(){
    long long int n, contador=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>ar[i];
    for(int i=1; i<=n-1; i++){
        while(ar[i]<ar[i-1]){
            ar[i]+=1;
            contador++;
        }
    }
    cout<<contador;
    return 0;
}