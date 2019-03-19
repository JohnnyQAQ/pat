#include<iostream>
#include<string>
using namespace std;

int main() {
  /* code */
  string a;
  string pinyin[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  cin>>a;
  long long sum = 0;
  string s;
  for (size_t i = 0; i < a.size(); i++) {
    /* code */
    sum += (int)(a[i]-'0');
  }

  string sum_str = to_string(sum);

  for (int i = 0; i < sum_str.size()-1; i++) {
    /* code */
    cout << pinyin[sum_str[i]-'0'] << ' ';
  }
  cout << pinyin[sum_str[sum_str.size()-1]-'0'];
  return 0;
}
