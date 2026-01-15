#include<stdio.h>
int main()
{
    int no=78;
    int *p=&no;
    int **q=&p;
    int ***r=&q;
    int ****s=&r;
    int *****t=&s;
    int ******u=&t;


    printf("%d\n",sizeof(no));
    printf("%d\n",&no);
    printf("%d\n",&p);
    printf("%d\n",sizeof(s));
    printf("%d\n",sizeof(*t));
    printf("%d\n",sizeof(*r));
    printf("%d\n",***s);
    printf("%d\n",**r);
    printf("%d\n",****t);
    printf("%d\n",***u);
    

    return 0;


}
