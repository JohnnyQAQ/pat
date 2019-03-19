#include<iostream>
using namespace std;
int main(){
  int num ;
  cin>> num;
  while(num--){
    int left=0,mid=0,right=0;//字母A在P、T的左边、中间、右边的个数
    string str;
    cin>>str;

    int P_num=0,A_num=0,T_num=0;//P、A、T的字母个数
    int flag = 1;
    for (size_t i = 0; i < str.size(); i++) {
      /* code */
      if(str[i]!='P'&&str[i]!='A'&&str[i]!='T'){ //
        flag = 0;
        break;
      }else if(str[i]=='P') P_num++;
      else if(str[i]=='A') A_num++;
      else if(str[i]=='T') T_num++;//统计字母个数
    }

      if(flag = 0||P_num!=1||T_num!=1||A_num<1){//四种不符合的情况：
                                                //1.字符串中没有P、A、T这三个字母
                                                //2.P的数量超过1
                                                //3.T的数量超过1
                                                //4.A的数量不足1
        cout<<"NO"<<endl;
        continue;
      }
      if(A_num==1&&str!="PAT") { //“APT”属于特殊情况，特殊处理
        cout<<"NO"<<endl;
        continue;
      }

      //遍历，找出A的分布（左、中、右）
      int i = 0;
      for (i = 0; i < str.size(); i++) {
        /* code */
        if(str[i]=='A') left++;
        else if(str[i]=='P') break;
      }
      for (i = i + 1; i < str.size(); i++) {
        /* code */
        if(str[i]=='A') mid++;
        else if(str[i]=='T') break;
      }
      for (i = i + 1; i < str.size(); i++) {
        /* code */
        if(str[i]=='A') right++;
      }
      if(left*mid!=right){//由题意知：当left*mid==right时，符合条件，否则不符合
        cout<<"NO"<<endl;
      }else cout<<"YES"<<endl;

    }

}
