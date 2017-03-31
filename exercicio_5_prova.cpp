#include <iostream>
#include <math.h>
 using namespace std;

double fatorial (int n)
{
    if(n==1)
        return n;
    return fatorial(n-1) * n;
}

 int main(){
    long double R=0;
    for(int n=1;n<=30;n++){
        R = fatorial(n);
        cout<<R<<endl;
    }



 }
