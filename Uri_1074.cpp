#include <iostream>
using namespace std;
int main(){
    int N,num;
    cin>>N;
    for(int i =0;i<N;i++){
        cin>>num;
        if(num != 0){
            if(num%2==0){
                cout<<"EVEN ";
            }else{
                cout<<"ODD ";
            }
            if(num>0){
                cout<<"POSITIVE"<<endl;
            }else{
                cout<<"NEGATIVE"<<endl;
            }
        }else{
            cout<<"NULL"<<endl;
        }
    }
}
