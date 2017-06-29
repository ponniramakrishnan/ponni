#include<stdio.h>
int main()
{
char c;
printf("Enter the character");
scanf("%c",&c);
if((c>='a' && c<='z') || (c>="A" && c<="Z"))
{
printf("Entered character is alphabet");
}
else
printf("Entered character is not a alphabet");
}
