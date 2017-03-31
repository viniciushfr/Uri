#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double X;
    cin>>X;
    double N[100];
    for(int i =0;i<100;i++){
        N[i]= X;
        X/=2;
    }
    for(int i=0;i<100;i++){
        cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<N[i]<<endl;
    }
}
