#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n, k=0, j, count = 0;
  cin>>n;
  int a[n];
  for(j = 2; j <= n; j++){
      int i = 0,m =sqrt(j);
      for(i = 2; i <= m; i ++){
        if(j % i == 0) break;
      }
      if(i > m){
        cout<<j<<' ';
        a[k++] = j;
      }
  }
  for(int t = 0 ; t < k; t++){
    if(a[t+1]-a[t] == 2) count++;
  }
  cout<<count;
}
