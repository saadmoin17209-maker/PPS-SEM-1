#include<stdio.h>
void main()
{
int i,f=1,n;
printf("Enter a number");
scanf("%d",&n);
if(n<0)
printf("No factorial");
else

for(i=1;i<=n;i++)
{

f=f*i;
}
printf("The factorial is %d",f);
}
