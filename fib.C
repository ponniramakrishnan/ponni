#include<stdio.h>
int main()
{
int n,t0=0,t1=1,next,i;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("%d",t0);
next=t0+t1;
t0=t1;
t1=next;
}
return 0;
}
