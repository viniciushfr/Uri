#include <iostream>
using namespace std;
int main(){
    int M,N,maior,menor,sum=0;
    cin>>M>>N;
    while(M>0 and N>0){
        if(M>N) {
            maior = M;
            menor = N;
        }
        else{
            maior = N;
            menor = M;
        }
        for(int i = menor;i<= maior;i++){
            sum+=i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<sum<<endl;
        sum=0;
        cin>>M>>N;
    }
}

