#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    while(cin>>A>>B>>C){
    if(A>B and C>=B)cout<<":)"<<endl;
    else if(B>A and C<=B)cout<<":("<<endl;
    else if(A<B and C>B and B-A>C-B)cout<<":("<<endl;
    else if(A<B and C>B and B-A<=C-B)cout<<":)"<<endl;
    else if(A>B and C<B and B-C<A-B)cout<<":)"<<endl;
    else if(A>B and C<B and B-C>=A-B)cout<<":("<<endl;
    else if(A==B and C>B)cout<<":)"<<endl;
    else if(A==B and C<=B)cout<<":("<<endl;
    }
}
