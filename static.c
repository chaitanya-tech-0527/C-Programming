#include<stdio.h>

void nandi()
{
    static char a='1';
    a++;

    printf("%c\n",a);

}
int main()
{
    nandi();
     nandi();
      nandi();
       nandi();
        nandi();

        return 0;
        
   
}