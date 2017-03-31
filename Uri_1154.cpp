#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double idade,sum=0;
    int cont=0;
    cin>>idade;
    while(idade>0){
        cont++;
        sum+=idade;
        cin>>idade;
    }
    cout<<fixed<<setprecision(2)<<sum/cont<<endl;
}
