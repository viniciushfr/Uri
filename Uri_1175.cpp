#include <iostream>
using namespace std;
int main(){
    int N[20];
    for(int i =0;i<20;i++){
        cin>>N[i];
    }
    int k=19;
    int aux;
    for(int i=0;i<10;i++){
        aux = N[k];
        N[k]=N[i];
        N[i]=aux;
        k--;
    }
     for(int i =0;i<20;i++){
       cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
}
