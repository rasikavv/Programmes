#include<stdio.h>
int main(void)
{
	float a,b,c,avg;
	printf("Enter 3 numbers:");
	scanf("%f%f%f",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("Average:%f",avg);
	return 0;
}
