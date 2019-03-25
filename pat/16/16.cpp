#include<iostream>
using namespace std;

int main(){
  string a,b;
  int a1,b1;
  int a_cnt = 0,b_cnt = 0;
  cin>>a>>a1>>b>>b1;
  for(int i = 0; i < a.size();i ++){
    if(a[i] - '0' == a1) a_cnt++;
    else continue;
  }
  for(int i = 0; i < b.size();i ++){
    if(b[i] - '0' == b1) b_cnt++;
    else continue;
  }
  // cout<<a_cnt<<' '<<b_cnt;
  long a_sum = 0,b_sum = 0;
  for(int i = 0;i < a_cnt;i++){
    a_sum = a1 + a_sum*10;
  }
  for(int i = 0;i < b_cnt;i++){
    b_sum = b1 + b_sum*10;
  }
  cout<<a_sum+b_sum;


}
