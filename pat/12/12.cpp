#include<iostream>
using namespace std;

int main(){
    int n,i;
    int num,A1=0,A2=0,A22=0,A3=0,A5=0,A4=0,A44=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num;

        if(num%10==0) A1+=num;//a1

        if(num%5==1)//a2
        {
            A22++;//a2中的字符个数
            if(A22%2==1) A2+=num;//奇数位相加
            else A2-=num;//偶数位相减
        }

        if(num%5==2) A3++;//a3

        if(num%5==3)//a4
        {
            A4+=num;
            A44++;
        }

        if(num%5==4)//a5
        {
            if(num>A5) A5=num;
        }
    }
    if(A1) {printf("%d ",A1);} else {printf("N ");}
    if(A22) {printf("%d ",A2);} else {printf("N ");} // 这有个坑，如果A2求和之后为零，
                                                    // ，如果用A2作为条件，会导致显示为N，
                                                    // 而不是0
    if(A3) {printf("%d ",A3);} else {printf("N ");}
    if(A44) {printf("%.1f ",(float)A4/A44);} else {printf("N ");}
    if(A5) {printf("%d\n",A5);} else {printf("N\n");}
    return 0;

}
