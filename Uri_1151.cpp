#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int vetor[N];
    for(int i= 0;i<N;i++){
        if(i==0 or i==1){
            vetor[i]=i;
        }else{
            vetor[i]=vetor[i-1]+vetor[i-2];
        }
        cout<<vetor[i];
        if(i==N-1){
            cout<<endl;
        }else{
            cout<<" ";
        }

    }
}
