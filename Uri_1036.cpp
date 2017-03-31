#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double A,B,C;
    double delta;
    double R1,R2;

    cin>>A>>B>>C;
    delta = (pow(B,2))-(4*A*C);
    if(delta<0 or A==0){
        cout<<"Impossivel calcular"<<endl;
    }else{
        R1 = (-1*B+sqrt(delta))/(2*A);
        R2 = (-1*B-sqrt(delta))/(2*A);
        cout<<"R1 = "<<fixed<<setprecision(5)<<R1<<endl;
        cout<<"R2 = "<<fixed<<setprecision(5)<<R2<<endl;
    }
}
