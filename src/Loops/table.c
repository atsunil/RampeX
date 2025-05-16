#include <stdio.h>


int main() {
int a=1,c,i;
printf("enetre the table:");
scanf("%d",&c);
   
while(a<=10)
{
    i=a*c;
    printf("%d*%d=%d \n",a,c,i);
    a++;
}


    return 0;

}