#include <iostream>
using namespace std;
int main(){
    int ho;
    cin >>ho;
    for(int i=0;i<ho;i++){
        cout<<"Ho";
        if(i==ho-1)cout<<"!"<<endl;
        else cout<<" ";
    }
}
