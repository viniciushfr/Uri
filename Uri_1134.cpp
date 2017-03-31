#include <iostream>
using namespace std;
int main(){
    int num,alc=0,gas=0,die=0;
    cin>>num;
    while(num!=4){
        if(num ==1)alc++;
        else if(num == 2)gas++;
        else if(num == 3)die++;

        cin>>num;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alc<<endl;
    cout<<"Gasolina: "<<gas<<endl;
    cout<<"Diesel: "<<die<<endl;
}
