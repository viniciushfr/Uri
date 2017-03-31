#include <iostream>
using namespace std;
int main(){
    int N;
    while(cin>>N){
        int matricula;
        double nota;
        double maior=0;
        int matricula_maior=0;
        for(int i=0;i<N;i++){
            cin>>matricula>>nota;
            if(nota>maior){
                maior=nota;
                matricula_maior=matricula;
            }
        }
        if(maior>=8)cout<<matricula_maior<<endl;
        else cout<<"Minimum note not reached"<<endl;
    }
}
