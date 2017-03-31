#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N!=0){
    int matriz[N][N];
    int cont =1;
    for(int l=0;l<N;l++){
        for(int c =0;c<N;c++){
            matriz[l][c]=cont;
            cont*=2;
        }

        cont=matriz[l][1];

    }
    int T=0;
    int valor = matriz[N-1][N-1];
    if (valor == 0) T = 1;
        else
            while (valor != 0){
               T++;
               valor = valor / 10;
            }

    for(int l=0;l<N;l++){
        for(int c =0;c<N;c++){
                int D;
            if(matriz[l][c]<10)D=1;
            else if(matriz[l][c]<100)D=2;
            else if(matriz[l][c]<1000)D=3;
            else if(matriz[l][c]<10000)D=4;
            else if(matriz[l][c]<100000)D=5;
            else if(matriz[l][c]<1000000)D=6;
            else if(matriz[l][c]<10000000)D=7;
            else if(matriz[l][c]<100000000)D=8;
            else if(matriz[l][c]<1000000000)D=9;

            for(int i=0;i<T-D;i++){
                 cout<<" ";
             }
          cout<<matriz[l][c];
          if(c<N-1)cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cin>>N;
    }
}

