#include <iostream>
using namespace std;
int main(){
    int num,index_par=0,index_impar=0;
    int par[5];
    int impar[5];
    for(int i=0;i<15;i++){
        cin>>num;
        if(num%2==0){
            par[index_par]=num;
            index_par++;
        }else {
            impar[index_impar]= num;
            index_impar++;
        }
        if(index_par==5){
            for(int i =0 ;i<5;i++){
                cout<<"par["<<i<<"] = "<<par[i]<<endl;
                index_par=0;
            }
            //imprime e apaga
        }
        if(index_impar==5){
            for(int i =0 ;i<5;i++){
                cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
                index_impar=0;
            }
        }

    }
    for(int i=0;i<index_impar;i++){
           cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
    }
    for(int i =0 ;i<index_par;i++){
            cout<<"par["<<i<<"] = "<<par[i]<<endl;
            }
}
