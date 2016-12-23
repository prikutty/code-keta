#include<stdio.h>
int main()
{
int oN,re,r=0;
printf("Enter a integer:");
scanf("%d",&n);
while(oN!=0)
{
re=oN%10;
r+=re*re*re;
oN/=10;
}
if(r==n)
{
printf("%d is an Armstrong number");
}
else
{
printf("%d is not an Armstrong number");
}
return 0;
}
