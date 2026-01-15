#include<stdio.h>
struct hello
{
    int no;
    int x;
    struct demo
    {
        int i;
        int j;

    }dobj;

}hobj;

int main()
{
    hobj.no = 10;
    hobj.x = 20;
    hobj.dobj.i =30;
    hobj.dobj.j= 40;

    return 0;
    

}