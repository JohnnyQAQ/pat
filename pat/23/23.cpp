#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  vector<int> v;//用来存储产生的所有数字

  for(int i = 0; i < 10; i++){
    int temp ;
    cin>>temp;//每位的次数
    for(int j = 0; j < temp; j++){//次数所产生的数字
      v.push_back(i);
    }
  }
  for(int k = 0; k < v.size(); k++){
    if(v[0]!=0) break;//如果第一位不是0，则直接结束，就可以输出
    if(v[k]==0) continue;//如果是0，则需要往下找到不是0的那一位，进行交换
    else swap(v[k],v[0]);
  }

  for(int i = 0; i < v.size(); i++){
    cout<<v[i];
  }
}
