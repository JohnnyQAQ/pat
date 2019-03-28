#include<iostream>
using namespace std;

int main(){
   string inp;
   cin>>inp;
   int num[10]={0};
   for(int i=0;i < inp.length();i++){
	   if(inp[i] - '0'== 0) num[0]++;
	   if(inp[i] - '0'== 1) num[1]++;
	   if(inp[i] - '0'== 2) num[2]++;
	   if(inp[i] - '0'== 3) num[3]++;
	   if(inp[i] - '0'== 4) num[4]++;
	   if(inp[i] - '0'== 5) num[5]++;
	   if(inp[i] - '0'== 6) num[6]++;
	   if(inp[i] - '0'== 7) num[7]++;
	   if(inp[i] - '0'== 8) num[8]++;
	   if(inp[i] - '0'== 9) num[9]++;
	}
	for(int i =0;i < 10;i++){
		if(num[i]!=0) cout<<i<<':'<<num[i]<<endl;
		}

}
