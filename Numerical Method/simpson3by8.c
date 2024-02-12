//simple simpson 3/8 rule
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
	h=(b-a)/3;
	i=(3*h/8)*(f(a)+3*f(a+h)+3*f(a+2*h)+f(b));
	printf("The result is:%f",i);
	return 0;
	
}
