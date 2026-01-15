#include<stdio.h>
struct demo
{
    int i;
    float j;
    int p;

};

int main()
{
    struct demo obj1;
    struct demo obj2;

    obj1.i = 9;  //(.) direct member acessing
    obj1.j = 8.6;
    obj1.p = 4;

    obj2.i = 7;
    obj2.j = 2.7;
    obj2.p = 4;


    printf("%d\n",obj1.i);
    printf("%f\n",obj1.j);
    printf("%d\n",obj1.p);

    return 0;

    



}
