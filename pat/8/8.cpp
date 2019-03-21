#include<iostream>
using namespace std;

int main(){
  int m , n ;
  cin>>m>>n;
  int a[m];
  for(int i = 0; i < m; i++){
    cin>>a[i];
  }
//直接从要求的位置输出结果
  // for(int j = m - (n%m) ; j < m; j++){ //当循环次数n大于m时，对n取模
  //   cout<<a[j]<<' ';
  // }
  //
  // for(int k = 0; k < m - (n%m); k++ ){
  //   cout<<a[k];
  //   if(k < m - (n%m) - 1) cout<<' ';
  // }

  int i = (m - (n%m))%m;
  int v = i;
  cout<<a[v];
  while(i!=(v=(++v)% m)){
    cout<< ' '<< a[v];
  }


}
