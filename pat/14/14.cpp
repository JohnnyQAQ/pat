#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  string input_1,input_2,input_3,input_4;
  cin>>input_1>>input_2>>input_3>>input_4;
  string week[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
  int count = 0;
  for(int i = 0;i < input_1.size(); i++){
      if(input_2[i]==input_1[i]&&count == 0&&input_1[i]>='A'&input_1[i]<='G') {
        count=1;
        cout<<week[(input_1[i] - 64) - 1]<<" ";
        continue;
      }
      if(input_2[i]==input_1[i]&&count == 1){
        if(input_1[i]>='0'&&input_1[i]<='9') {
          cout<<'0'<<input_1[i] - '0';
          break;
        }
        if(input_1[i]>='A'&&input_1[i]<='Z') {
          cout<<input_1[i] - 'A' + 10;
          break;
        }
    }
  }

  for(int p = 0; p < input_3.size();p++){
    if(input_3[p] == input_4[p] && input_3[p]>=97&&input_3[p]<=122){
      cout<<":";
      cout<<setw(2)<<setfill('0')<<p;
    }
  }
}
