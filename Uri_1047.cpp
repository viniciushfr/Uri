#include <iostream>
using namespace std;
int main(){
    int H1,M1,H2,M2;
    int H,M;
    bool NH = false;
    cin>>H1>>M1>>H2>>M2;
     if(M2 - M1<0){
        NH = true;
        M = (M2 -M1)+60;
    }else{
        M = (M2-M1);
    }
    if(H2-H1<0){
        H = (H2-H1)+24;
    }else{
        H = (H2-H1);
    }
  if(NH)H--;
    if(H==0 and M ==0)H+=24;
    cout<<"O JOGO DUROU "<<H<<" HORA(S) E "<<M<<" MINUTO(S)"<<endl;

}

