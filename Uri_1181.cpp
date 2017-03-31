#include <iostream>
#include <iomanip>
#define TAM 12

using namespace std;

int main(){

    double M[TAM][TAM],sum =0;
    int linha;
    char op;
    cin>>linha;
    cin>>op;
    for(int l=0;l<TAM;l++){
        for(int c=0;c<TAM;c++){
            cin>>M[l][c];
        }
    }
    for(int c=0;c<TAM;c++){
        sum+=M[linha][c];
    }
    if(op=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(op=='M')cout<<fixed<<setprecision(1)<<sum/TAM<<endl;
}
