#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

struct mooncake{
  float num;
  float price;
};

bool comp(mooncake a,mooncake b){
  return a.price > b.price;
}

int main(){
  vector<mooncake> list ;
  int N ;
  float D;
  cin>>N>>D;
  float A[N];
  for(int i = 0; i < N; i++){
    cin>>A[i];
  }
  for(int i = 0; i < N; i++){
    float temp;
    cin>>temp;
    mooncake T;
    T.num = A[i];
    T.price = temp/A[i];
    list.push_back(T);
  }
  sort(list.begin(),list.end(),comp);
  // for(int i = 0; i < list.size();i++){
  //   cout<<list[i].num<<' '<<list[i].price<<endl;
  // }
  int sold = 0,i = 0,left = D;
  float profit = 0;
  while(left > 0&&i < list.size()){
    if(D<=0) break;
    if(list[i].num > left) profit += left * list[i].price;
    else profit += list[i].num * list[i].price;
    left -= list[i].num;
    i++;
  }
  cout<<setiosflags(ios::fixed)<<setprecision(2)<<profit;

}
