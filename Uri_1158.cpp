#include <iostream>
using namespace std;
int main(){
    int N,X,Y;
    int sum=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>X>>Y;
        for(int i=X;Y>0;i++){
            if(i%2!=0){
                sum+=i;
                Y--;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
}
