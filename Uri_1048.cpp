#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double salario;
    double reajuste;
    string percentural ="";
    cin>>salario;

    if(salario>=0.0 and salario <= 400.0){
        reajuste = salario*0.15;
        salario = salario + reajuste;
        percentural = "15 %";
    }else if(salario > 400.0 and salario <= 800.0 ){
        reajuste = salario*0.12;
        salario = salario + reajuste;
        percentural = "12 %";
    }else if(salario > 800.0  and salario <=1200.0){
        reajuste = salario*0.10;
        salario = salario + reajuste;
        percentural = "10 %";
    }else if(salario > 1200.0 and salario <=2000){
        reajuste = salario*0.07;
        salario = salario + reajuste;
        percentural = "7 %";
    }else if(salario > 2000){
        reajuste = salario*0.04;
        salario = salario + reajuste;
        percentural = "4 %";

    }
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<reajuste<<endl;
    cout<<"Em percentual: "<<percentural<<endl;
}
