#include<iostream>
#include<algorithm>
#include<functional>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
  int input,a[4];
  cin>>input;
  for(int i = 0; i < 4; i++){//将数字保存到a[4]数组当中
    a[3-i] = ((int)(input/pow(10,i))%10);
  }


  while(1){

    sort(a,a+4,greater<int>());//降序排序
    // for(int i = 0; i < 4; i++){
    //   cout<<a[i];
    // }
    int dec = 0;
    int inc = 0;
    for(int i = 0; i < 4; i ++){
      dec =dec*10 + a[i] ;//生成升序排列的数
    }
    // cout<<inc;
    for(int i = 3; i >=0; i --){
      inc =inc*10 + a[i] ;//生成降序排列的数
    }
    int result = dec - inc;
    if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]){//判断特殊情况
      cout<<setw(4)<<setfill('0')<<dec<<" - "<<setw(4)<<inc<<" = "<<setw(4)<<result<<endl;
      break;
    }
    cout<<setw(4)<<setfill('0')<<dec<<" - "<<setw(4)<<inc<<" = "<<setw(4)<<result<<endl;
    if(result == 6174) break;//跳出判断
    for(int i = 0; i < 4; i++){//把a[4]重新赋值
      a[3-i] = ((int)(result/pow(10,i))%10);
    }
  }

}
