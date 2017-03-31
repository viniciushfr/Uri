#include <iostream>

using namespace std;


int main(){
  int v[3];
  cin>>v[0]>>v[1]>>v[2];
  int vo[3];
  vo[0] = v[0];
  vo[1] = v[1];
  vo[2] = v[2];
  int j,i,key;
  for(j = 1; j < 3; j++){
     key = vo[j];
     i = j - 1;
     while(i >= 0 && vo[i] > key){
        vo[i + 1] = vo[i];
        i = i - 1;
     }
     vo[i + 1] = key;
  }
  cout<<vo[0]<<endl;
  cout<<vo[1]<<endl;
  cout<<vo[2]<<endl;
  cout<<endl;
  cout<<v[0]<<endl;
  cout<<v[1]<<endl;
  cout<<v[2]<<endl;
}
