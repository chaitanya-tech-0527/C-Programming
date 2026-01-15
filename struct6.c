#include<stdio.h>
struct demo
{
    int i;
    float f;
    struct demo obj;  //not allowed, we cannot create the object of same structure inside the structure
                              
};
int main()
{
    struct demo obj1;  //allowed.
    return 0;


}