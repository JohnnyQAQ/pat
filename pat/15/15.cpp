#include<stdio.h>
#include<stdlib.h>

struct Stu
{
    long number;
    int quality;
    int talent;
}stu[4][100000],swap1;

int change(const void *a,const void *b);

int main(void)
{
    int n,l,h;
    int i,j;
    static int s[4];
    scanf("%d %d %d",&n,&l,&h);
    for (i=0;i<n;i++)
    {
        scanf("%ld %d %d",&swap1.number,&swap1.quality,&swap1.talent); //swap1这里暂时客串一下临时变量
        if (swap1.quality>=l && swap1.talent>=l) //直接先分4类
        {
            if (swap1.quality>=h && swap1.talent>=h) {stu[0][s[0]]=swap1;s[0]++;}
            else if (swap1.quality>=h && swap1.talent<h) {stu[1][s[1]]=swap1;s[1]++;}
            else if (swap1.quality<h && swap1.talent<h && swap1.quality>=swap1.talent) {stu[2][s[2]]=swap1;s[2]++;}
            else {stu[3][s[3]]=swap1;s[3]++;}
        }

    }
    printf("%d\n",s[0]+s[1]+s[2]+s[3]);
    for (i=0;i<4;i++)
    {
        qsort(stu[i],s[i],sizeof(struct Stu),change);
    }
    for (i=0;i<4;i++)
    {
        for (j=0;j<s[i];j++)
        {
            printf("%ld %d %d\n",stu[i][j].number,stu[i][j].quality,stu[i][j].talent);
        }
    }
    return 0;
}

int change(const void *a,const void *b) //每类人里面的排序
{
    struct Stu *aa=(struct Stu *)a;
    struct Stu *bb=(struct Stu *)b;
    if ((aa->quality+aa->talent)<(bb->quality+bb->talent)) return 1;
    if ((aa->quality+aa->talent)>(bb->quality+bb->talent)) return -1;
    if (aa->quality>bb->quality) return -1;
    if (aa->quality<bb->quality) return 1;
    if (aa->number>bb->number) return 1;
    else return -1;
}
