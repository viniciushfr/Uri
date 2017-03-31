#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string pessoa;
        int forca;
        cin>>pessoa;
        cin>>forca;
        if(pessoa == "Thor")cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
}
