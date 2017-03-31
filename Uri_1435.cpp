#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N!=0){
    int matriz[N][N];
    for(int l=0;l<N;l++){
        for(int c =0;c<N;c++){
            int a,b;
            if(l>=N/2)a =abs(l-N)-1;
            else a =l;
            if(c>=N/2)b = abs(c-N)-1;
            else b = c;
            if(a>b)matriz[l][c]=b+1;
            else if(a==b) matriz[c][l] =b+1;
            else matriz[l][c]=a+1;
        }
    }
    for(int l=0;l<N;l++){

        for(int c =0;c<N;c++){
            if(c==0)cout<<"  ";
            else if(matriz[c][l]<10)cout<<"   ";
            else if(matriz[c][l]<100)cout<<"  ";
            else if(matriz[c][l]<1000)cout<<" ";
          cout<<matriz[l][c];
        }
        cout<<endl;
    }
    cout<<endl;
    cin>>N;
    }
}
