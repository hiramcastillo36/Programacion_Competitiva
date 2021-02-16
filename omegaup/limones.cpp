#include <iostream>
#include <algorithm>
#define MAX 1005
char letras[MAX];
int num[MAX];
using namespace std;

int main(){
    unsigned long int n, t, l;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>t>>l;
        if(t!=0&&l!=0){
            if(l%t)
                cout<<"I";
            else
                cout<<"R";
        }
        else if(t==0)
            cout<<"R";
        else if(l==0)
            cout<<"L";
        cout<<"\n";
    }
}
