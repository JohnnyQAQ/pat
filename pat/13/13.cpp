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
    int flag = 0;//是素数就为0
    for(int j = 2; j <= sqrt(i);j++){//判断是否为素数
      if(i%j==0) {
        flag = 1;//不是素数置为1
        break;
      }
    }
    if(flag){ //进入下一个数的循环（本次失败）
      i++;
      continue;
    }
    else{
      sushu_cnt++;//当前素数的个数
      if(sushu_cnt>=n&&sushu_cnt<=m){
        cnt++;//符合条件的素数的个数，方便进行换行操作
        if(cnt%10==0) cout<<i<<endl;//每十个数换行
        else if(sushu_cnt==m) cout<<i;//当素数个数达到最大要求的时候，不用输出空格
        else cout<<i<<" ";//常规输出：数字+空格
      }
      if(sushu_cnt > m){//统计完总共需要的素数，结束循环
          break;
      }
    }
    i++;//进入下一个数的循环（本次成功）
  }
return 0;
}
