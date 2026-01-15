#include<stdio.h>
int main()
// sizeof operator used:
{
    int iarr [4]={1,2,3,4};
    char carr [4]={'a','b','c','d'};
    float farr [4]={2.3,3.3,4.4,5.3};
    double darr [4]={23.34,13.45,34.56,67.78};

    printf("%d\n",iarr[0,1,2,3]);
    printf("%d\n",sizeof(iarr));

    
    return 0;


}