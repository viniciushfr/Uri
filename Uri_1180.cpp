#include <iostream>
using namespace std;
int main(){
    int N,X,M,P=0;
    cin>>N;
    cin>>M;
    for(int i=1;i<N;i++){
        cin>>X;
        if(X<M){
            M = X;
            P = i;
        }
    }
    cout<<"Menor valor: "<<M<<endl;
    cout<<"Posicao: "<<P<<endl;

}
