#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        float A,B,C;
        cin>>A>>B>>C;
        cout<<fixed<<setprecision(1)<<((A*2)+(B*3)+(C*5))/10<<endl;
    }
}
