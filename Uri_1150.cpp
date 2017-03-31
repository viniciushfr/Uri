#include <iostream>
using namespace std;
int main(){
    int X,Z;
    cin>>X>>Z;
    while(Z<=X){
        cin>>Z;
    }
    int sum=0;
    int cont=0;
    while(sum<Z){
        sum+=X+cont;
        cont++;
    }
    cout<<cont<<endl;
}
