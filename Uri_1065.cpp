#include <iostream>
using namespace std;
int main(){
    int v;
    int par=0;
    for(int i=0;i<5;i++){
        cin>>v;
        if(v%2 == 0)par++;
    }
    cout<<par<<" valores pares"<<endl;
}
