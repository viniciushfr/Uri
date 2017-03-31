#include <iostream>
using namespace std;
int main(){
    int valores[100];
    int maior =0,pos;
    for(int i =0;i<100;i++){
        cin>>valores[i];
        if(valores[i]>maior){
        maior = valores[i];
        pos = i+1;
        }
    }
    cout<<maior<<endl;
    cout<<pos<<endl;
}
