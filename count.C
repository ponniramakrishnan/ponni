include<stdio.h>
int main()
{
int n;
int count=0;
printf("Enter the integer");
scanf("%d",&n);
while(n!=0)
{
  n=n/10;
  count=count+1;
}
printf("number of digits %d",count);
}
