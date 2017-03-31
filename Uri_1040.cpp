#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double N1,N2,N3,N4;
    double M;

    cin>>N1>>N2>>N3>>N4;

    M = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    cout<<"Media: "<<fixed<<setprecision(1)<<M<<endl;
    if(M<5){
        cout<<"Aluno reprovado."<<endl;
    }else if(M>=5 and M<7){
        cout<<"Aluno em exame."<<endl;
        double exame =0;
        cin>>exame;
        cout<<"Nota do exame: "<<fixed<<setprecision(1)<<exame<<endl;
        M = (M+exame)/2;
        if(M<5){
            cout<<"Aluno reprovado."<<endl;
        }else{
            cout<<"Aluno aprovado."<<endl;
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<M<<endl;
    }else if(M>=7){
        cout<<"Aluno aprovado."<<endl;
    }
}

