#include<stdio.h>
int main()
{
int n,i=1;
printf("Enter the number:");
scanf("%d",&n);
printf("Multiplication of table %d",&n);
while(i<=10)
{
printf("%d * %d=%d",n,i,n*i);
i++;
}
return 0;
}
