#include<iostream>
#include<string>
using namespace std;

int main(){
  string input[80];
  int i = 0;
  for(; cin>>input[i] && getchar()!='\n'; i++);
  for(int j = i ; j >=0; j-- ){
    cout<<input[j];
    if(j != 0) cout<<' ';
  }
  return 0;
}

// int check(){
//
// }
