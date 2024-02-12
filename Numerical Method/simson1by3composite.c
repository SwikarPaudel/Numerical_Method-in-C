//composite simpson 1/3 rule
#include<stdio.h>
#include<math.h>
float f(float x)
{
	return (1+pow(x,3));
}
int main()
{	int i;
	float a,b,I,c=0,h,n,k=0,s=0;
	printf("Enter lower limit a and upper limit b\n");
	scanf("%f%f",&a,&b);
	printf("Enter the number of strip n:" );
	scanf("%f",&n);
	h=(b-a)/n;
	c=f(a)+f(b);
	for(i=1;i<=n-1;i=i+2)
	{	
		k=k+f(a+i*h);
	}
		for(i=2;i<=n-1;i=i+2)
	{	
		s=s+f(a+i*h);
	}
	I=(h/3)*(c+4*k+2*s);
	printf("The result is:%f",I);
	return 0;
}
