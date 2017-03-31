#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int PA,PB;
    double G1,G2;
    int anos=0;
    for(int i=0;i<N;i++){
    cin>>PA>>PB>>G1>>G2;
    double aux_pa = PA, aux_pb = PB;
    while(PA<=PB){
        anos++;
        PA+=(PA*G1)/100.0;
        PB+=(PB*G2)/100.0;
        if(anos>100)break;
    }
    if(anos>100)
    cout<<"Mais de 1 seculo."<<endl;
    else
    cout<<anos<<" anos."<<endl;

    anos=0;
    }
}
