#include<stdio.h>
int main()
{
int l,i,h,f;
scanf"%d%d",&l,&h);
while(l<h)
{
f=0;
for(i=2;i<=1/2;++i)
{
if(l%i==0)
{
f=1;
break;
}
}
if(f==0)
printf("%d",l);
}
return 0;
}
