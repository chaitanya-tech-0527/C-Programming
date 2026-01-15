#include<stdio.h>
struct demo
{
    int i;
    float f;
    int arr[5];   //we create array in structure
};
int main()
{
    struct demo obj;

    obj.i = 55;
    obj.f = 33.33;

    obj.arr[0]=11;
    obj.arr[1]=21;
    obj.arr[2]=31;
    obj.arr[3]=41;
    obj.arr[4]=51;

    

    return 0;


}