#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int N,quant=0,sum_coelho=0,sum_rato=0,sum_sapo=0;
    char tipo;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>quant;
        cin>>tipo;
        if(tipo=='R')sum_rato+=quant;
        else if(tipo == 'S')sum_sapo+=quant;
        else if(tipo == 'C')sum_coelho+=quant;
    }
    int total = sum_coelho+sum_rato+sum_sapo;
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<sum_coelho<<endl;
    cout<<"Total de ratos: "<<sum_rato<<endl;
    cout<<"Total de sapos: "<<sum_sapo<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<(sum_coelho*100.00)/total<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<(sum_rato*100.00)/total<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<(sum_sapo*100.00)/total<<" %"<<endl;
}
