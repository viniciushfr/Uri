#include <iostream>
using namespace std;
int main(){
    int N,F;
    unsigned long long int fib[61];
    fib[0]=0;
    fib[1]=1;
    for(int i =2;i<61;i++){
        fib[i]= fib[i-1]+fib[i-2];
    }
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>F;
        cout<<"Fib("<<F<<") = "<<fib[F]<<endl;
    }
}
