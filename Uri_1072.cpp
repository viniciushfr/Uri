#include <iostream>
using namespace std;
int main(){
    int N,in =0,out =0,num;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num;
        if(num>=10 and num <=20)in++;
        else out++;
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
}
