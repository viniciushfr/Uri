#include <iostream>
using namespace std;
int main(){
    int X,sum=0;
    cin>>X;
    while(X!=0){
        int Y=5;
        for(int i=X;Y>0;i++){
            if(i%2==0){
                sum+=i;
                Y--;
            }
        }
        cout<<sum<<endl;
        sum=0;
        cin>>X;
    }
}
