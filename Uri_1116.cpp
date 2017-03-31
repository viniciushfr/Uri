#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int N;
    cin>>N;
    double X,Y;
    for(int i=0;i<N;i++){
        cin>>X>>Y;
        if(Y==0){
            cout<<"divisao impossivel"<<endl;
        }else{
            cout<<fixed<<setprecision(1)<<(X/Y)<<endl;
        }
    }
}
