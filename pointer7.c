#include<stdio.h>
int addition(int no1,int no2)
{
    int ans=0;
    ans=no1+no2;
    return ans;
}
int main()
{
    int val1=10;
    int val2=20;
    int ret=0;

    int (*ptr)(int ,int );

    ptr = addition;

    ret=ptr(val1,val2);

    printf("%d\n",ret);

    return 0;
    

}