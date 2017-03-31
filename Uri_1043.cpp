#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A,B,C;
    cin>>A>>B>>C;
    if((A+B) <= C or (A+C) <= B or (B+C) <= A){
        cout<<fixed;
        cout<<"Area = "<<setprecision(1)<<((A+B)*C)/2<<endl;
    }else{
        cout<<fixed;
        cout<<"Perimetro = "<<setprecision(1)<<A+B+C<<endl;
    }

}
