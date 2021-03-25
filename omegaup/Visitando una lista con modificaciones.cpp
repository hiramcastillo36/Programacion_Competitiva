#include <bits/stdc++.h>
#define MAX 10000000
int lista[MAX];
using namespace std;

queue <int> fin;
vector <int> inicial;
queue <int> inicio;
queue <int> aux;
/*
pos_nodo+=k;
            pos_nodo_valor=inicial[pos_nodo];
......
n++;
            inicio.resize(0);
            fin.resize(0);
            //limpiar vector inicio - fin
            for(int i=0; i<pos_nodo; i++)
                inicio.push_back(inicial[i]);
            for(int i=pos_nodo; i<n; i++)
                fin.push_back(inicial[i]);
            inicial.resize(0);
            for(int i=0; i<n; i++)
                */
int main(){
    int n, m, k, pos_nodo=0, pos_nodo_valor; cin>>n>>m;
    string instruccion;
    for(int i=0; i<n/2; i++)
        inicio.push(i);
    for(int i=n/2; i<n; i++)
        fin.push(i);
    for(int i=0; i<m; i++){
        cin>>instruccion;
        if(instruccion=="AVANZA"){
            cin>>k;
            pos_nodo += k;
            cout<<"pos nodo: "<<pos_nodo<<"\n";
        }else if(instruccion=="INSERTA_ATRAS"){
            cin>>k;
            if(pos_nodo < inicio.size()){
                aux = inicio;
                while(inicio.size()!=0)
                    inicio.pop();
                inicio.push(k);

                for(int i=0; i<=aux.size()+1; i++){
                    inicio.push(aux.front());
                    aux.pop();
                }
            }else{
                aux = fin;
                while(fin.size()!=0)
                    fin.pop();
                fin.push(k);
                for(int i=0; i<=aux.size()+1; i++){
                    fin.push(aux.front());
                    aux.pop();
                }
            }
        }else{
            if(pos_nodo+1 < inicio.size()){
                cout<<"entro";
                aux = inicio;
                for(int i=1; i<=aux.size(); i++){
                    if(i==pos_nodo-1){
                        aux.pop();
                    }
                    inicio.push(aux.front());
                    aux.pop();
                }
            }else{
                aux = fin;
                while(fin.size()!=1)
                    fin.pop();
                for(int i=0; i<aux.size(); i++){
                    if(i==pos_nodo-1){
                            aux.pop();
                    }
                    fin.push(aux.front());
                    aux.pop();
                }
            }
        }
    }/*
    if(pos_nodo <= inicio.size()){
        for(int i=0; i<inicio.size(); i++){
            cout<<inicio.front();
            inicio.pop();
        }
        cout<<"\n";
        cout<<inicio.front()<<"\n";
        for(int i=0; i<=fin.size(); i++){
            cout<<fin.front();
            fin.pop();
        }
    }else{
        cout<<"www\n";
        cout<<inicio.size()<<"\n";
        for(int i=0; i<=inicio.size(); i++){
            cout<<inicio.front();
            inicio.pop();
        }
        cout<<"\n";
        cout<<fin.front()<<"\n";
        fin.pop();
        for(int i=0; i<=fin.size()+1; i++){
            cout<<fin.front();
            fin.pop();
        }
    }*/
    while(!inicio.empty()){
        cout<<inicio.front();
        inicio.pop();
    }
    while(!fin.empty()){
        cout<<fin.front();
        fin.pop();
    }
}
