#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, c, x1, x2, aux;
    cin>>a>>b>>c;
    aux = (b*b)-4*a*c;
    x1=-1*(b)+ sqrt(aux);
    x1=x1/(2*a);
    x2=(-1)*(b)-sqrt(aux);
    x2=x2/(2*a);
    cout<<x1<<" "<<x2<<"\n";
}