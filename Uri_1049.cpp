#include <iostream>

using namespace std;

int main(){
    string palavra[3];

    cin>>palavra[0]>>palavra[1]>>palavra[2];

    if(palavra[0] =="vertebrado"){
        if(palavra[1] == "ave"){
            if(palavra[2] == "carnivoro"){
                cout<<"aguia"<<endl;
            }else{
                cout<<"pomba"<<endl;
            }
        }else{
            if(palavra[2]=="onivoro"){
                cout<<"homem"<<endl;
            }else{
                cout<<"vaca"<<endl;
            }
        }
    }else{
        if(palavra[1]=="inseto"){
            if(palavra[2]=="hematofago"){
                cout<<"pulga"<<endl;
            }else{
                cout<<"lagarta"<<endl;
            }
        }else{
            if(palavra[2] == "hematofago"){
                cout<<"sanguessuga"<<endl;
            }else{
                cout<<"minhoca"<<endl;
            }
        }
    }
}
