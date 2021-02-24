#include <bits/stdc++.h>
#define MAX 300010
int fib[MAX];
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c==180){
    if(a==60&&b==60&&c==60){
        cout<<"EQUILATERO";
        return 0;
    }else if(a==b||b==c||a==c&&a!=90&&b!=90&&c!=90){
        cout<<"ISOSCELES";
        return 0;
    }else if(a!=b&&b!=c&&a!=c&&a!=90&&b!=90&&c!=90){
        cout<<"ESCALENO";
    return 0;
    }else if(a==90||b==90||c==90){
        cout<<"RECTANGULO";
    return 0;
    }
    }
}