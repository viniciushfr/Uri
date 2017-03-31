#include <iostream>
using namespace std;
int main(){
    int N,sum=0,num;
    cin>>N;
    bool primo = true;
    for(int i=0;i<N;i++){
        cin>>num;
        for(int k=num-1;k>1;k--){
            if(num%k == 0){
                primo = false;
                break;
            }
        }
        if(num==1)primo=false;
        if(primo) cout<<num<<" eh primo"<<endl;
        else cout<<num<<" nao eh primo"<<endl;
        primo = true;
        }
}

