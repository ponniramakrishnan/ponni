#include<stdio.h>
int main()
{
int a1,b1;
printf("Enter the intervals");
scanf("%d","%d",&a1,&b1);
while(a1<b1)
{
  if((a1%2)==0)
  {
    printf("%d",a1);
   }
   a1++;
}
}
