#include <cstdio>
#include<iostream>
using namespace std;

int main() {
	int a,i=0;
  cin>>a;
  while(a>1){
    a=(a%2==0)?a/2:(3*a+1)/2;
    i++;
  }
  cout<<i<<endl;
  return 0;
}
