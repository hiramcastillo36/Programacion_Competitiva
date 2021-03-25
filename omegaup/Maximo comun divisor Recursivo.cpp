#include <bits/stdc++.h>
using namespace std;

int mcd(int x, int y){
    if(x%y>0){
        return mcd(y, x%y);
    }else
        return y;
}

int main(){
    int x, y, mc; cin>>x>>y;
    if(y > x)
        swap(x, y);
    cout<<mcd(x, y);
}
