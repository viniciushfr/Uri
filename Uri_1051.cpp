#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double salario,imposto = 0;

    cin>> salario;

    if(salario> 4500){
        imposto+=(salario-4500)*0.28;
        salario = salario - (salario-4500);
    }
    if(salario>3000){
        imposto+=(salario-3000)*0.18;
        salario = salario - (salario-3000);
    }
    if(salario>2000){
        imposto+=(salario-2000)*0.08;
        salario = salario - (salario-2000);
    }
    if(salario<2000 and imposto ==0){
        cout<<"Isento"<<endl;
    }else{
        cout<<fixed;
        cout<<"R$ "<<setprecision(2)<<imposto<<endl;
    }
}
