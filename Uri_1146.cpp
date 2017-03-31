#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N>0){
        for(int i=1;i<=N;i++){
            cout<<i;
            if(i==N){
                cout<<endl;
            }else{
                cout<<" ";
            }
        }
        cin>>N;
    }
}
