#include <iostream>
#include <algorithm>
#define MAX 1000
char letras[MAX];
int num[MAX];
using namespace std;

int main(){
    for(int i=0; i<3; i++)
        cin>>num[i];
    for(int i=0; i<3; i++)
        cin>>letras[i];
    sort(num, num+3);
    for(int i=0; i<3; i++){
        cout<<num[(letras[i]-'0')-17]<<" ";
    }
}
