#include<stdio.h> 
#define PI 3.14
int main ()
{
int radius;
printf("Enter the value of radius");
scanf("%d",&radius);
float area;
area=PI*radius*radius;
printf("The area of the circle is:%2f\n",area);
return 0;
}