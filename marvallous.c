#include<stdio.h>

#include "PPA.h"

#include "PPA2.h"

int main()
{

    struct demo obj;

    printf("inside main\n");

    printf("rate of interest is %f\n",ROI); //10.7

    printf("fees of logic building batch :%d\n",FEES); //18200

    printf("size of demo structure :%d\n",sizeof(obj)); //8

    printf("value of return:%d\n",ret);

    printf("find rate:%f\n",rate);



    return 0;

}

// 1 #include<____.h>  ->inbuilt header files

//  2 #include "_____.h"   ->userdefined header files

#define MACRO_NAME MACRO_VALUE
//examples
#define MAX 90
#define DOZEN 12
#define SHEKADA 100
#define PI 3.14




