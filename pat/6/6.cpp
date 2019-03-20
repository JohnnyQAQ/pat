#include<iostream>
using namespace std;

int main(){
  int input;
  cin>>input;
  int bai = 0;
  int shi = 0;
  int ge = 0;
  int result[3];
  for(int i = 0; i < 3; i++){
    result[i] = input%10;
    input = input / 10;
  }
  ge = result[0];
  shi = result[1];
  bai = result[2];

  while(bai--) cout<<'B';
  while(shi--) cout<<'S';
  for(int i = 1; i <= ge; i ++){
    cout<<i;
  }

}
