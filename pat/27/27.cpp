#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  char a;
  cin>>a;
  int cot = 0 , m = n, k = 6;
  while(m >= 1){
    m -= k;
    k = k + 4;
    cot++;
  }
  m = m+k-4-1;
  cout<< m<<endl;
  cot--;
  int h = (k - 8)/2;
  int f=h;
  for(int i = 0; i < cot; i ++ ,h-=2){
    for(int j = 0; j < (f-h)/2; j++) cout<<' ';
    for(int j = 0; j < h; j++)  cout<<a;
    cout<<endl;
  }

  for(int i = 0; i < f / 2;i++) cout<<' ';
  cout<<a<<endl;

  h += 2;
  for(int i = 0; i < cot; i ++ ,h+=2){
    for(int j = 0; j < (f - h)/2; j++) cout<<' ';
    for(int j = 0; j < h; j++)  cout<<a;
    cout<<endl;
  }
}
