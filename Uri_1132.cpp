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
    for(int i = menor;i<=maior;i++){
        if(i%13 !=0) sum+=i;
    }
    cout<<sum<<endl;
}


