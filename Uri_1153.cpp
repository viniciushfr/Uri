#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    long int fat=1;
    for(int i=N;i>0;i--){
        fat*=i;
    }
       cout<<fat<<endl;

}
