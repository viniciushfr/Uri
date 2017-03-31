#include <iostream>
using namespace std;
int main(){
    int j=5;
    for(int i =1;i<=9;i+=2){
        cout<<"I="<<i<<" J="<<j+2<<endl;
        cout<<"I="<<i<<" J="<<j+1<<endl;
        cout<<"I="<<i<<" J="<<j<<endl;
        j+=2;
    }
}
