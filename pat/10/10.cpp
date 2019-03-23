#include<iostream>
using namespace std;

int main(){
  int a, b ;
  int flag = 1;
  while(cin>>a>>b){
    if(b == 0) break; //到最后一位，跳出循环
    if(!flag) cout<<' ';
    else   flag = 0;
    cout<<a*b<<' '<<b-1;

  }
  if(flag) cout<<"0 0";

}
