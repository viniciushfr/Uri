#include <iostream>
using namespace std;
int main(){
    int X=0,Y=0;
    cin>>X>>Y;
    int cont=0;
    for(int i =1;i<=Y;i++){
            cout<<i;
            cont++;
        if(cont==X){
            cout<<endl;
            cont =0;
        }else{
            cout<<" ";
        }

    }
}

