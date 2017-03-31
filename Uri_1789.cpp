#include <iostream>
using namespace std;
int main(){
    int lesmas;
    int velocidade;
    while(cin>>lesmas){
        int maior=0;
        for(int i = 0;i<lesmas;i++){
            cin>>velocidade;
            if(maior<velocidade)maior = velocidade;
        }

        if(maior<10 )cout<<1<<endl;
        else if(maior<20 and maior>=10)cout<<2<<endl;
        else cout<<3<<endl;
    }
}
