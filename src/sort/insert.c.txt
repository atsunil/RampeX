#include <stdio.h>
int main()
{
    int size,j,temp;
    printf("ener the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    int num,pos;
    printf("\nenter the number to insert in array:");
    scanf("%d",&num);
   
     printf("\nenter the position to insert the number in array:");
    scanf("%d",&pos);
  int n=size;
    for(int i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
        }
         arr[pos]=num;
        n++;
    
printf("inserted  array:");
for(int i=0;i<size;i++)
{
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}