#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return sin(x)+3*x-2;
}
float g(float x)
{
	return (2-sin(x))/3;	
}
int main()
{
	float x0,e,n,x1;
	int step=0;
	printf("Enter the initial value\n");
	scanf("%f",&x0);
	printf("Enter the ending condition and maximum iteration\n");
	scanf("%f %f",&e,&n);
	do{
		x1=g(x0);
		step++;
		if(step>n){
			printf("Not Convergent");
		}
		x0=x1;
	
	}while(fabs(f(x1))>e);
	printf("Root :%f",x1);
	printf("step:%d",step);
	
}
