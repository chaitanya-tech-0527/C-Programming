#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};

    int *p=&(arr[3]);
    int *r=&(arr[0]);
    int **q=&r;
    int *z=&(arr[5]);

    printf("%d\n",*p);
    printf("%d\n",*r);
    printf("%d\n",*z);

    return 0;
    
}