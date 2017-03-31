#include <iostream>
using namespace std;
int main(){
    int X,Y,maior,menor,sum=0;
    cin>>X>>Y;
    if(X>Y){
        maior=X;
        menor=Y;
    }else{
        maior=Y;
        menor=X;
    }
    for(int i = menor+1;i<maior;i++){

        if(i%2!=0)sum+=i;
    }
    cout<<sum<<endl;
}
