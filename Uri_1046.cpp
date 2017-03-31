#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin>>A>>B;
    if(B-A<1){
        cout<<"O JOGO DUROU "<<(B-A)+24<<" HORA(S)"<<endl;
    }else{
        cout<<"O JOGO DUROU "<<(B-A)<<" HORA(S)"<<endl;
    }
}
