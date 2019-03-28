#include<iostream>
#include<vector>
using namespace std;

int main(){
  long long A,B,sum;
  int C;//1<=C<=10;这样就不用考虑除数字以外的字母了
  vector<int> v;//容器v存储每次产生的余数
  cin>>A>>B>>C;
  sum = A+B;
  if(sum == 0) cout<<0;
  while(sum != 0 ){
    int temp = sum % C;
    v.push_back(temp);
    sum /= C;
  }
  for(int i = v.size() - 1; i >= 0; i--){//反向输出余数，即为结果
    cout<<v[i];
  }

}
