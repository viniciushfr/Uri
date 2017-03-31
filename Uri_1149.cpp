#include <iostream>
using namespace std;
int main(){
    int A,N,sum=0;
    cin>>A>>N;
    while(N<=0){
        cin>>N;
    }
    for(int i= A;i<A+N;i++){
        sum+=i;
    }
    cout<<sum<<endl;
}
