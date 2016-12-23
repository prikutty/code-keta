#include<stdio.h>
int main()
{
int c,d;
long long p=1;
scanf("%d",&c);
scanf("%d",&d);
while(d!=0)
{
p*=c;
--d;
}
printf("11%d",d);
return 0;
}
