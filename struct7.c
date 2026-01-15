#include<stdio.h>
struct demo
{
    int i;
    int a;

};

struct hello
{
    int A;
    int B;

    struct demo dobj;  //object of one structure member of another structure
};

int main()
{
    struct hello hobj;
    return 0;

}