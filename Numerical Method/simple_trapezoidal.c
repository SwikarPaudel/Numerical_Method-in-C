//Simple trapezoidal rule
#include<stdio.h>
#include<math.h>
int f(int x)
{
	return (1+pow(x,3));
}
int main()
{
	float a,b,i,h;
	printf("Enter lower limit a and upper limit b\n");
	scanf("%f %f",&a,&b);
	h=b-a;
	i=h/2*(f(a)+f(b));
	printf("The result is:%f",i);
	return 0;
	
}
