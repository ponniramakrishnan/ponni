#include<stdio.h>
int main()
{
int n1,n2,i,gcd;
printf("Enter two integers");
scanf("%d %d",&n1,&n2);
for(i=0;i<=n1 && i<=n2;i++)
{
if(n1%i==0 && n2%i==0)
gcd=i;
}
printf("GCD FOR %d AND %d IS %d",n1,n2,gcd);
}
