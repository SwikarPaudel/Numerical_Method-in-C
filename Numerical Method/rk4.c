#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	return (3*pow(x,2))+1;//18.125
}
int main()
{
	int i;
	float x0,y0,x1,y1,h,xp,n,k1,k2,k3,k4,k;
	printf("Enter the initial value and step size h:\n");
	scanf("%f %f %f",&x0,&y0,&h);
	printf("\nEnter the value of x for which y is required:\n");
	scanf("%f",&xp);
	n=(xp-x0)/h;
	for(i=1;i<=n;i++)
	{
		k1=h*f(x0,y0);
		k2=h*f(x0+h/2,y0+k1/2);
		k3=h*f(x0+h/2,y0+k2/2);
		k4=h*f(x0+h,y0+k3);
		k=(k1+2*k2+2*k3+k4)/6;
		y1=y0+k;
		x0=x1+h;
		y0=y1;
	}
	printf(" y=%f for x=%f\nsteps:%f",y1,xp,n);
	return 0;
}
