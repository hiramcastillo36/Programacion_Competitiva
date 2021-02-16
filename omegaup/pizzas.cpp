#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int puebla, chihuahua, guanajuato, total_pizzas=0, sobrantes;
    cin>>puebla>>chihuahua>>guanajuato;
    total_pizzas+=guanajuato; 
    sobrantes = guanajuato; //sobrantes cuartos
    if(chihuahua%2==0&&chihuahua>=2){
        total_pizzas = total_pizzas + (chihuahua/2); //si son pares se pueden alimentrar entre ellos
    } else {
        total_pizzas = (puebla+guanajuato+chihuahua)/2;
    }
    if(puebla%4==0&&puebla>=4){
        total_pizzas = total_pizzas + (puebla/4);
    }else 
        total_pizzas = (puebla+guanajuato+chihuahua)/2;

    cout<<total_pizzas;
} 