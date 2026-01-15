#include<stdio.h>
struct demo
{
    int i;
    float f;

};
int main()
{
    struct demo arr[4];    //we can create array of structure object

    arr[0].i = 33;
    arr[0].f = 45.33;

    arr[1].i = 22;
    arr[1].f = 35.33;

    arr[2].i = 11;
    arr[2].f = 25.33;

    arr[3].i = 1;
    arr[3].f = 15.33;

    return 0;


    

    

    

    






}