#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double N1,N2;
    int newcal = 0;
    while(newcal !=2){
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

        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        cin>>newcal;
        while(newcal<1 or newcal>2){
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>newcal;
        }
        }
}

