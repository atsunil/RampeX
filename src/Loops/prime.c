// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
int n;
printf("enter the number:");
scanf("%d",&n);
{
if(n<=1)
{
    printf("%d it is not  prime number",n);
    return 0;
}
if(n==2)
{
    printf("%d it is prime number",n);
   return 0; 
}
if(n%2==0)
{
    printf("%d it is not prime number",n);
    return 0;
}
for(int i=3;i<=sqrt(n);i+=2){
    if(n%i==0)
 {
    printf("%d it is  not prime number",n);
    return 0;
}
}
 } return 0;
}