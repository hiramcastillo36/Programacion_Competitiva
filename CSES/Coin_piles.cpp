#include <iostream>
using namespace std;

bool piles(int a, int b){
    if(a==0&&b==0)
        return 1;
    else if((a<=0 && b>0) || (b<=0 &&a >0) || a==1&&b==1)
        return 0;
    a > b ? piles(a%2, b-a/2) :piles(a-b/2, b%2) ;

}

int main(){
    int t;
    long long a, b;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        if(piles(a, b))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
