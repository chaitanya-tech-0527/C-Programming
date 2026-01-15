#include<stdio.h>
int main()
{
    int no=11;
    int *iptr=&no;

    char ch='y';
    char *cptr=&ch;

    double d=89.89;
    double *dptr=&d;

    printf("%d\n",no);
    printf("%c\n",ch);
    printf("%ld\n",d);
    
    printf("******\n");

    printf("%d\n",&no);
    printf("%c\n",&ch);
    printf("%ld\n",&d);
    
    printf("******\n");

    printf("%d\n",&iptr);
    printf("%c\n",&cptr);
    printf("%ld\n",&dptr);
    
    printf("******\n");

    printf("%d\n",*iptr);
    printf("%c\n",*cptr);
    printf("%ld\n",*dptr);

    printf("******\n");

    printf("%d\n",sizeof(iptr));
    printf("%c\n",sizeof(cptr));
    printf("%ld\n",sizeof(dptr));

    printf("******\n");

    printf("%d\n",sizeof(*iptr));
    printf("%c\n",sizeof(*cptr));
    printf("%ld\n",sizeof(*dptr));

    return 0;



}