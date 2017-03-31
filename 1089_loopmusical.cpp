#include <iostream>

using namespace std;

int main(){

    int N;
    cin>>N;
    int amostra[N];
    while(N!= 0){
        cin>>amostra[0];
        for(int i =1;i<N;i++){
            cin>>amostra[i];
            if(amostra[i]>amostra[i-1])
            cout<<"subiu"<<endl;
            if(amostra[i]<amostra[i-1])
            cout<<"desceu"<<endl;
        }







    }








}
