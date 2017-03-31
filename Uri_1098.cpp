#include<iostream>
using namespace std;
int main(){
    double I = 0;
    double J = 0;
    double K = 0.2;
    while(I<=2){
        for(int i=1;i<=3;i++){
            cout << "I=" << I << " J=" << i+J << endl;
        }
        I += K;
        J += K;
    }
}
