#include <iostream>
using namespace std;

int main(){
  int num;
  long a,b,c;
  cin>>num;
  for(int i = 1; i <= num; i ++){
    cin>>a>>b>>c;
    if(a + b > c) cout<<"Case #"<<i<<": true"<<endl;
    else cout<<"Case #"<<i<<": false"<<endl;
  }

}
