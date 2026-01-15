#include<stdio.h>
struct hello
{
    int i;
    int j;
    struct demo
    {
        int no;
        float f;
    }dobj1,dobj2;
}hobj;

int main()
{
    hobj.i = 10;
    hobj.j = 20;

    hobj.dobj1.no = 30;
    hobj.dobj1.f = 40.0;

    hobj.dobj2.no = 50;
    hobj.dobj2.f = 20.20;

    return 0;


}
