#include<stdio.h>
int main()
{
int i,n,f=0;
printf("enter a number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
f=1;
break;
}
}
if(f==1)
printf("not a prime number");
else
printf("prime number");
return 0;
}
