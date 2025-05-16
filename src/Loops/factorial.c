#include <stdio.h>

int main() {
int a=1,n,i=1,j=1;
printf("enter the series:");
scanf("%d",&n);

{
for(i=1;i<=n;i++)
{
    a*=i;
}

printf("the fibno series of %d is %d",n,a);
return 0;
}