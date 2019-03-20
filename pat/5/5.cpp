#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool complare(int a,int b)
{
    return a>b;
}


int main() {
  /* code */
  int input_num;
  cin>>input_num;
  int num[input_num];
  int check[9999];
  int result[999];
  for (size_t i = 0; i < input_num; i++) {
    /* code */
    cin>>num[i];
  }

  int n = 0;
  for(int i = 0;i < input_num; i++){
    int a = num[i];
    while(a>1){
      a=(a%2==0)?a/2:(3*a+1)/2;
      check[n++] = a;
    }
  }
  // for(int i = 0; i < n; i++){
  //   cout<<check[i];
  // }
  int flag = 1;
  int k = 0;
  for(int i = input_num-1 ; i >= 0; i--){
    for(int j = 0; j < n; j++){
      if(num[i] == check[j]) {flag = 1;break;}
      else flag = 2;
    }
    if(flag == 2) result[k++] = num[i];
  }
  sort(result,result+k,complare);
  for(int i = 0;i<k;i++){
    cout<<result[i];
    if(i!=(k-1)) cout<<' ';
  }

  return 0;
}
