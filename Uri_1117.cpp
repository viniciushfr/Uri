#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double N1,N2;
    cin>> N1;
    while(N1>10 or N1<0){
        cout<<"nota invalida"<<endl;
        cin>>N1;
    }
    cin>>N2;
    while(N2>10 or N2<0){
        cout<<"nota invalida"<<endl;
        cin>>N2;
    }
    cout<<"media = "<<fixed<<setprecision(2)<<(N1+N2)/2<<endl;
}
