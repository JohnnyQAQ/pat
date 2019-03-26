#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> a;
  vector<int> result;
  int b;
  string a_str;
  cin>>a_str;
  cin>>b;
  for(int i = 0; i < a_str.size(); i ++ ){
    a.push_back(a_str[i] - '0');
  }
  int q = a[0], h;
  h = q % h ;
  if(q>=b) cout<<q/b;

  for(int j = 1; j < a.size(); j ++){
    q = a[j];
    cout<<(h*10+q)/b;
    h = (h*10+q)%b;
  }
  cout<<' '<<h;

}
