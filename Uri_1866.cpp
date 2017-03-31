#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int T;
        cin>>T;
        if(T%2==0)cout<<0<<endl;
        else cout<<1<<endl;
    }
}
