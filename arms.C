#include<stdio.h>
#include<math.h>
main()
{
int a,b,i,t1,t2,n=0,result;
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
printf("Armstrong number between two intervals");
for(i=a+1;i<b;++i)
{
      t2=i;
      t1=i;
    while(t1!=0)
    {
      t1=t1/10;
      ++n;
    }
    while(t2!=0)
    {
      r=t2%10;
      result=result+pow(r,n);
      t2=t2/10;
    }
    if(result==i)
    {
    printf("%d",i);
    }
    n=0;
    result=0;
    }
    return 0;
}
