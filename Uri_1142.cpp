#include <iostream>
using namespace std;
int main(){
    int N, S=1;
    cin>>N;
    while(N>0){
        cout<<S<<" "<<S+1<<" "<<S+2<<" PUM"<<endl;
        S=S+4;
        N--;
    }
}
