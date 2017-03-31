#include <iostream>
using namespace std;
int main(){
    double a,b;
    while(cin>>a>>b){
    cout.precision(2);
    cout<<fixed<<((b*100)/a)-100<<"%"<<endl;
    }
}
