#include <iostream>
#include <iomanip>
#define TAM 12

using namespace std;

int main(){

    double M[TAM][TAM],sum =0;
    int col;
    char op;
    cin>>col;
    cin>>op;
    for(int l=0;l<TAM;l++){
        for(int c=0;c<TAM;c++){
            cin>>M[l][c];
        }
    }
    for(int l=0;l<TAM;l++){
        sum+=M[l][col];
    }
    if(op=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(op=='M')cout<<fixed<<setprecision(1)<<sum/TAM<<endl;
}

