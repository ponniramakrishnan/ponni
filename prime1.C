#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter limits for prime numbers");
scanf("%d%d",&a,&b);
while(a<b)
{
flag=0;
for(i=2;i<=a/2;++i)
{
  if(a%i==0)
  {
  flag=1;
  break;
  }
}
flag==0
printf("%d",a);
++a;
}
