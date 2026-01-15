#include<stdio.h>
int addition(int A, int B)
{
    int result=0;
    result=A+B;
    return result;

}
int main()
{
    int no1=10;
    int no2=50;
    int ans=0;

    ans=addition(no1,no2);

    printf("%d",ans);
    return 0;


}