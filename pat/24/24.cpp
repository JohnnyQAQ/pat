#include<iostream>
#include<vector>
using namespace std;

int main(){
  string input_str;
  cin>>input_str;
  vector<int> left_num;
  int v = 0;
  for(; v < input_str.size()&&input_str[v]!='E';v ++){
    if(input_str[v]=='+'||input_str[v]=='.'||input_str[v]=='-') continue;
    left_num.push_back(input_str[v] - '0');
  }

  int k = v + 2;
  int right_num = 0;
  for(; k < input_str.size();k++){
    right_num = (right_num*10 + (input_str[k]-'0'));
    // cout<<(input_str[k]-'0')<<' '<<right_num<<' ';

  }
  // cout<<right_num<<endl;

  if(input_str[v+1]=='-') {
    for(int i = 0; i < right_num; i++){
      left_num.insert(left_num.begin(),0);
    }
    if(input_str[0]=='-') cout<<'-';
    cout<<"0.";
    for(int i = 1; i < left_num.size(); i++){
      cout<<left_num[i];
    }
  }

  if(input_str[v+1]=='+'){

    if(right_num + 1 < left_num.size()){
      if(input_str[0]=='-') cout<<'-';
      for(int i = 0; i < right_num + 1; i++){
        cout<<left_num[i];
      }
      cout<<'.';
      for(int i = right_num + 1; i < left_num.size(); i++){
        cout<<left_num[i];
      }
    }
    else{
      if(input_str[0]=='-') cout<<'-';
      for(int i = 0; i < left_num.size();i++){
        cout<<left_num[i];
      }
      // cout<<'*'<<right_num<<' '<<left_num.size()<<' ';
      for(int i = 0; i < right_num - left_num.size()+1 ;i++){
        cout<<'0';
      }
    }
  }
}
