#include <iostream>
using namespace std;
int main(){
    int X,Y,sum =0,maior,menor;
    cin>>X>>Y;
    if(X>Y) {
        maior = X;
        menor = Y;
    }
    else{
        maior = Y;
        menor = X;
    }
    for(int i = menor+1;i<maior;i++){
        if(i%5 == 2 or i%5 == 3) cout<<i<<endl;

    }
}


