#include <iostream>
using namespace std;
int main(){
    string num;
    int vetor[5] = {1,2,6,24,120};

    cin >> num;
    while(num!="0"){
        long long int x = 0;
        for(int i=0;i<num.size();i++){
            x += (num[i]-'0')*vetor[num.size()-1-i];
        }
        cout << x << endl;
        cin>> num;
    }
}
