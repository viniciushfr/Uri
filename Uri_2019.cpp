#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;
int main(){
    double V,D,A,H;
    while(cin>>V>>D){
    A=PI*pow(D/2,2);
    H=V/A;
    cout.precision(2);
    cout<<"ALTURA = "<<fixed<<H<<endl;
    cout<<"AREA = "<<fixed<<A<<endl;
    }
}
