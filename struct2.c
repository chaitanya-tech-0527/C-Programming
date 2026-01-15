#include<stdio.h>
struct demo
{
    int i;
    float f;
    int j;

};

int main()
{
    struct demo obj1 = {11,33.33,22};
    struct demo *ptr = &obj1;

    obj1.i = 11;      //direct member inilialise

    ptr->j = 22;    //indirect member initialise

    ptr->f = 33.33;

    printf("%d\n",ptr->i);
    printf("%d\n",ptr->j);
    printf("%f\n",ptr->f);
    printf("%d\n",&obj1);

    return 0;

}