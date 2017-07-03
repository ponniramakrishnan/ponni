#include<stdio.h>
int main()
{
int a,flag;
printf("Enter positive number");
scanf("d%",n);
for(i=2;i<=n/2;++i)
{
  if(n%i==0)
  {
  flag=1;
  break;
  }
}
if(flag==0)
printf("Number is prime");
else
printf("number is not a prime");
}
