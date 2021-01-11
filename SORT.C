#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,a,n,number[30];
 clrscr();
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("\nEnter the elements of an array:");
 for(i=0;i<n;i++)
   scanf("%d",&number[i]);
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(number[i]>number[j])
   {
    a=number[i];
    number[i]=number[j];
    number[j]=a;
   }
  }
 }
 printf("\nThe sorted array is:\n");
 for(i=0;i<n;i++)
    printf("%d\n",number[i]);
 getch();
}