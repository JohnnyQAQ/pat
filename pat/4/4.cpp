#include<iostream>
using namespace std;
int main(){

  string name_max;
  string stu_num_max;
  int grade_max;
  string name_min;
  string stu_num_min;
  int grade_min;
  int n;
  cin>>n;
  for(int i = 0 ; i < n ; i++) {
    /* code */
    string name;
    string stu_num;
    int grade;
    cin>>name>>stu_num>>grade;
    if(i == 0){
    grade_max=grade;
    grade_min=grade;
    name_max=name;
    name_min=name;
    stu_num_max=stu_num;
    stu_num_min=stu_num;
    }
    if(grade>grade_max){
      grade_max=grade;
      name_max=name;
      stu_num_max=stu_num;
    }
    if(grade<grade_min){
      grade_min=grade;
      name_min=name;
      stu_num_min=stu_num;
    }
  }
  cout<<name_max<<' '<<stu_num_max<<endl;
  cout<<name_min<<' '<<stu_num_min<<endl;

}
