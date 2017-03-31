#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int P,N;
    while(cin>>P>>N){
        int C[N];
        bool win=true;
        cin>>C[0];
        for(int i = 1;i<N;i++){
            cin>>C[i];
            if(abs(C[i]-C[i-1])>P){
                win= false;
            }
        }
        if(win)cout<<"YOU WIN"<<endl;
        else cout<<"GAME OVER"<<endl;
    }
}
