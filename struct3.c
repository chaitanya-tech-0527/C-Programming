#include<stdio.h>
struct demo
{
    int i;
    float f;
    int j;
    int *h;       //we create pointer in structure
    float *d;

};
int main()
{
    struct demo obj1;
    int no1 = 34;
    float no2 = 55.44;

    obj1.i = 11;
    obj1.f = 3.3;
    obj1.j = 22;
    obj1.h = &no1;
    obj1.d = &no2;

    printf("%d\n",obj1.i);
    printf("%f\n",obj1.f);
    printf("%d\n",obj1.j);
    printf("%d\n",*(obj1.h));
    printf("%d\n",*(obj1.d));



    return 0;




}
