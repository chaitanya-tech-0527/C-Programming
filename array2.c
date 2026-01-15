#include<stdio.h>
int main()
{
    int iarr[4]={10,20,30,40};

    printf("%d\n",iarr[0]);
    printf("%d\n",iarr[1]);
    printf("%d\n",iarr[2]);
    printf("%d\n",iarr[3]);
    printf("%d\n",sizeof(iarr));
    printf("%d\n",sizeof(iarr[2]));
    printf("%d\n",&iarr[0]);
    printf("%d\n",iarr);



}