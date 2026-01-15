#include<stdio.h>

int addition (int a,int b)
{
    int ans=0;

    ans=a+b;
    return ans;

}

int main ()
{
    int no1 =10;
    int no2 =30;
    int ret =0;

    ret = addition(no1,no2);

    printf("addition no.=%d\n",ret);

    return 0;
    
}