#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

struct person{
  char name[6];
  int year;
  int month;
  int day;
};

bool compare(person a, person b){
  if(a.year!=b.year){
    return a.year >= b.year ? true : false;
  }else {
    return a.month * 30 + a.day >= b.month * 30 +b.day ? true : false;
  }
}

int main(){
  vector<person> list;
  int n;
  cin>>n;
  person p1,p2;
  p1 = {{}, 1814, 9, 6};
  p2 = {{}, 2014, 9, 6};

  int count = 0;
  for(int i = 0; i < n; i++){
    person p;
    scanf("%s %d/%d/%d", p.name,&p.year,&p.month,&p.day);

    if(compare(p,p1)&&compare(p2,p)){
      list.push_back(p);
      count++;
    }
  }

  sort(list.begin(), list.end(), compare);
  if(count == 0) {cout<<0; return 0;}
  printf("%d %s %s",count, list[list.size()-1].name,list[0].name);



}
