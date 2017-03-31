#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    while(cin>>N){
        int ano;
        for(int i=0;i<N;i++){
            cin>>ano;

            int A= ano-2015;
            if(A>0)A++;
            if(A==0)A++;
            if(A>0)cout<<A<<" A.C."<<endl;
            else cout<<abs(A)<<" D.C."<<endl;
        }
    }
}
