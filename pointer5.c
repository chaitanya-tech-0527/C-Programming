#include<stdio.h>
int main()
{
    int i=11;
    float f=8.9;
    char ch='r';
    double d=89.98;

    char *cp=&ch;
    int *ip=&i;
    float *fp=&f;
    double *dp=&d;

    void *vp=NULL;

    vp=&i;
    printf("%d\n",*(int *)vp);
    vp=&f;
    printf("%f\n",*(float*)vp);
    vp=&d;
    printf("%ld\n",*(double *)vp);
    vp=&ch;
    printf("%c\n",*(char *)vp);

    return 0;
    

}