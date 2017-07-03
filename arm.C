#include<stdio.h>
int main()
{
int number,temp,rem=0,sum=0,cube=0;
printf("Enter a number");
scanf("%d",&number);
temp=number;
while(number!=0)
{
  rem=number%10;
  cub=pow(rem,3);
  sum=sum+cube;
  number=number/10;
}
if(sum==temp)
printf("Given no is armstrong number");
else
printf("Given no is not a armstrong number");

}
