#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n , m ;
  cin>>n >>m ;
  int sushu_cnt = 0;
  int cnt = 0;
  int i = 2;//初始测试的数为2
  while(1){
    int flag = 0;//是素数就为1
    for(int j = 2; j <= sqrt(i);j++){//判断是否为素数
      if(i%j==0) {
        flag = 1;//不是素数置为0
        break;
      }
    }
    if(flag){
      i++;
      continue;
    }
    else{
      sushu_cnt++;
      if(sushu_cnt>=n&&sushu_cnt<=m){
        cnt++;
        if(cnt%10==0) cout<<i<<endl;
        else if(sushu_cnt==m) cout<<i<<endl;
        else cout<<i<<" ";
      }
      if(sushu_cnt > m){
          break;
      }
    }
    i++;
  }
return 0;
}
