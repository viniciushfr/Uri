#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
    int r = a%b;
     int q = a/b;
    if(r<0){
        r=r+abs(b);
        q=(a-r)/b;
    }
    cout<<q<<" "<<r<<endl;
    }
}
