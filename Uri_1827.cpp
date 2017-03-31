#include <iostream>
using namespace std;
int main(){
    int N;
    while(cin>>N){
        int matriz[N][N];
        for(int l=0;l<N;l++){
            for(int c=0;c<N;c++){
                if(c>=N/3 and c<=N-1-N/3 and l>=N/3 and l<=N-1-N/3)matriz[c][l]=1; //matriz interna, comeca apartir de N/3, preenche com 1
                else if(N-1-l==c)matriz[l][c]=3;//diagonal segundaria, quando N-linha é igual a coluna, preenche com 3
                else if(c==l)matriz[l][c]=2;// diagonal primaria, quando coluna = linha, preenche com 2
                else matriz[l][c]=0;//restante prenche com 0
            }
        }
        if(N%2!=0)matriz[N/2][N/2]=4;// se tiver um ponto central coloca 4
        for(int l=0;l<N;l++){for(int c=0;c<N;c++){cout<<matriz[l][c];}cout<<endl;}
        cout<<endl;// uma linha em branco entre a saida
    }
}
