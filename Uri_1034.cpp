#include <iostream>
int num_moedas(long long int,int,int*);
using namespace std;
int main(){
   int T,N,a,aux,contador=0;
   long long int  M;
   cin>>T;
   for(int i = 0 ;  i<T ; i++){
       cin>>N>>M;
       int vet[N];
       for(int j = 0 ; j<N ; j++){
           cin>>a;
           vet[j] = a;
       }

       contador = num_moedas(M,N,vet);

     cout<<contador<<endl;
     contador = 0;

   }



    return 0;
}
int num_moedas(long long int N,  int M, int * m) {
    long long int dp[N+1];



    dp[0] = 0;


    for(int i=1; i<=N; i++) {

        dp[i] = 1000000;

        for(int j=0; j<M; j++) {
            if(i-m[j] >= 0) {
                dp[i] = min(dp[i], dp[ i-m[j] ]+1);
            }
        }
    }

    return dp[N];
}
