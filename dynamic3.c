#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr=NULL;

    //step1: allocate the memory
    ptr = (int *)malloc(sizeof(int)*5);

    //step2: use the memory (in LB batch)

    ptr=(int *)realloc(ptr, sizeof(int)*5);//20 bytes

    ptr=(int*)realloc(ptr, sizeof(int)*7 );//28 bytes

    //step3: deallocate the memory
    free(ptr);

    return 0;


}