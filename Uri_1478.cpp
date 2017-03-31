#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N!=0){
    int matriz[N][N];
    bool cresce=true;
    int cont =1;
    for(int l=0;l<N;l++){
        for(int c =0;c<N;c++){
            matriz[l][c]=cont;
          if(cont>1 and !cresce)cont--;
          else if(cont==1)cresce=true;
            if(cont>=1 and cresce) cont++;

        }
        cont=l+2;
        cresce=false;
    }
    for(int l=0;l<N;l++){

        for(int c =0;c<N;c++){
            if(matriz[l][c]<10)cout<<"  ";
            else if(matriz[l][c]<100)cout<<" ";
          cout<<matriz[l][c];
          if(c<N-1)cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cin>>N;
    }
}
