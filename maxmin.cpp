#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    double vetor[N];
    for(int i=0;i<N;i++){
        cin >> vetor[i];
    }
    double maior = vetor[0];
    double menor = vetor[0];
    for(int i=1;i<N;i++){
        if(maior<vetor[i])maior = vetor[i];
        if(menor>vetor[i])menor = vetor[i];
    }
    cout << menor << " " << maior << endl;
}
