//Simple simpson 1/3 rule
#include<stdio.h>
#include<math.h>
float f(float x)
{
	return (1+pow(x,3));
}
int main()
{
	float a,b,i,h;
	printf("Enter lower limit a and upper limit b\n");
	scanf("%f%f",&a,&b);
	h=(b-a)/2;
	i=(h/3)*(f(a)+4*(f((a+b)/2))+f(b));
	printf("The result is:%f",i);
	return 0;
	
}
