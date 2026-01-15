#include<stdio.h>

int e=9;
int f;
int ans=0;


extern int c;


int main()
{
    ans=e+f+c;
    printf("%d",ans);
    
    return 0;


}