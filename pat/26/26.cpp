#include<cstdio>
int main(){
    int c1, c2;
    scanf("%d%d", &c1, &c2);
    int ans = (c2 - c1)/100;      //按题目要求作差
    if(ans % 100 >= 50){    //四舍五入操作
        ans += 1;
    }
    printf("%02d:%02d:%02d\n", ans / 3600, ans % 3600 /60, ans % 60);
    return 0;
}
