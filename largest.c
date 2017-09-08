#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
print("enter the three number");
scanf("%d%d,&a&b&c);
if(a>b)
{
if(a>c)
{ 
printf("a is large");
}else
{
printf("c is large ");
}else
{ 
if(c>b)
{
printf("c is large");
}else
{
printf("b is large");
}
}
}
}
