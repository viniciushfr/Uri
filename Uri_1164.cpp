#include <iostream>
using namespace std;
int main(){
    int N,sum=0,num;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num;
        for(int k=1;k<num;k++){
            if(num%k == 0){
                sum+=k;
            }
        }
        if(sum==num)cout<<num<<" eh perfeito"<<endl;
        else cout<<num<<" nao eh perfeito"<<endl;

        sum=0;
        }
}
