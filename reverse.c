#include<stdio.h>
int main()
{
int n,sum=0,rem=0;
printf("Enter the number");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
n=n/10;
sum=sum*10+rem;
}
printf("Reverse of a number is :%d",sum);
return 0;
}