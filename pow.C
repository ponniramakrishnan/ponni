#include<stdio.h>
int main()
{
int n,p,sum=1,i=1;
printf("Enter the number");
scanf("%d",&n);
printf("Enter the power");
scanf("%d",&p);
while(i<=p)
{
sum=sum*n;
i++;
}
printf("the value is %d",sum);
}
