#include <iostream>
using namespace std;
int main(){
    int N;
    while(cin>>N){
        int T;
        cin>>T;
        int M=T;
        int I=1;
        for(int i=1;i<N;i++){
            cin>>T;
            if(T<M){
                M=T;
                I=i+1;
            }
        }
        cout<<I<<endl;
    }
}
