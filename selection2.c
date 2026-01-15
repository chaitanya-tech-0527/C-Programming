#include<stdio.h>
int main()
{
    int std=0;
    printf("enter your standard :\n");
    scanf("%d",&std);

    switch (std)
    {
        case 1:
        printf("your exam is at 1pm\n");
        break;

        case 2:
        printf("your exam is at 2pm\n");
        break;

        case 3:
        printf("your exam is at 3pm\n");
        break;

        default:
        printf("invallid standard\n");

    }
return 0;

}
