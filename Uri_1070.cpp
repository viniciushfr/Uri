#include <iostream>
using namespace std;
int main(){
    int num,imp=0;
    cin>>num;
    while(imp<6){
        if(num%2!=0){
        imp++;
        cout<<num<<endl;
        }
        num++;
        }
}
