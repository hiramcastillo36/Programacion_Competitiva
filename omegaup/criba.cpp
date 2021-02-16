#include <iostream>
#define MAX 1000000
bool num[MAX];
using namespace std;

int llenar(){
    int contador=0;
    long long int pos=2;
    for(int i=2; i<MAX; i++)
        for(int j=2; i*j<=MAX; j++){
            num[i*j]=1;
        }
    //cout<<pos<<"    "<<contador<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, m;
    cin>>n;
   llenar();
  // cout<<endl;
    num[1]=1;
   for(int i=0; i<n; i++){
        cin>>m;
        if(num[m]==0){
           cout<<"SI";

   }
        if(num[m]==1){
           cout<<"NO";

        }
    cout<<"\n";
    }

}
