#include <iostream>
using namespace std;
int main(){
    int I,G;
    int VI =0,VG= 0,E= 0;
    int newgrenal = 1;
    int Q = 0;
    while(newgrenal==1){
        Q++;
        cin>>I>>G;
        if(I>G)VI++;
        else if(I==G) E++ ;
        else VG++;

        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>newgrenal;
    }
    cout<<Q<<" grenais"<<endl;
    cout<<"Inter:"<<VI<<endl;
    cout<<"Gremio:"<<VG<<endl;
    cout<<"Empates:"<<E<<endl;
    if(VI>VG){
        cout<<"Inter venceu mais"<<endl;
    }else if(VI==VG){
        cout<<"Nao houve vencedor"<<endl;
    }
    else{
        cout<<"Gremio venceu mais"<<endl;
    }

}
