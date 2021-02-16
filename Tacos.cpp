#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue <int> tacos;
    int n, aux, ta, sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>aux;
        if(aux==1){
            cin>>ta;
            tacos.push(ta);
        }
        if(aux==2){
            if(!tacos.empty()){
                sum=sum+tacos.front();
                tacos.pop();
            }
        }
        if(aux==3)
            cout<<tacos.size()<<"\n";
        if(aux==4)
            cout<<sum<<"\n";
    }
    return 0;
}