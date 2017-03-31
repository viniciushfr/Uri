#include <iostream>
#include<vector>
using namespace std;
int main(){
    string entrada;
    long long int M,N;
    cin>>N>>M;
    while(N!=0 and M!=0){
        vector<string> strings;
        strings.clear();
        int vetor[N];
        for(int i=0;i<N;i++){
            cin>>vetor[i];
        }
        cin.ignore();
        getline(cin,entrada);
        //cout << entrada << endl;
        string texto = entrada;
        strings.push_back(texto);
        long long int k = 0;
        while(texto!=entrada or k==0){
            string aux = "";
            for(int i=0;i<N;i++){
                aux += texto[vetor[i]-1];
            }
            texto = aux;
            strings.push_back(texto);
            k++;
        }
        long long int x;
        if(k!=0)
            x = k-(M%k);
        else x = 0;
        cout << strings[x] << endl;
        strings.clear();
        //cout << k << " - " << texto << endl;
        cin>>N>>M;
    }
}
