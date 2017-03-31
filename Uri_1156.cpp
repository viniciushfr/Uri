#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double S=0;
    int j=1;
    for(double i = 1;i<=39;i+=2){
        S+=i/j;
        j*=2;
    }
    cout<<fixed<<setprecision(2)<<S<<endl;
}

