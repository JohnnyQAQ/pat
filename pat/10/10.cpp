#include<iostream>
#include<string>
#include <sstream>
using namespace std;

int main(){
  int a, b ;
  int flag = 1;
  while(cin>>a>>b){
    if(b == 0) break;
    if(flag==0) cout<<' ';
      cout<<a*b<<' '<<b-1;
      flag = 0;

  }

}
