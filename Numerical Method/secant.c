//secant method
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x){
	return (pow(x,2)-4*x-10);
}
int main()
{
	float x0,x1,x2;
	int step=0;
	printf("Enter initial guess\n");
	scanf("%f%f",&x0,&x1);
	do{
		x2=x1-((x1-x0)/(f(x1)-f(x0)))*f(x1);
		x0=x1;
		x1=x2;
		step++;
	}
	while(fabs((x1-x0)/x1)>0.000001);
	printf("root :%f\n",x2);
	printf("Number of steps:%d",step);
	return 0;
}
