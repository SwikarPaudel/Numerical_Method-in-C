#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float c)
{
	return (pow(c,2)-4*c-10);
}
int main()
{
	float a,f0,f1,f2,c0,c1,c2,E=0.001;
	abc:printf("Enter the initial value:\n");
	scanf("%f %f",&c1,&c2);
	f1=f(c1);
	f2=f(c2);
	if((f1*f2)>0){
			goto abc;	
	}
	xyz:	c0=(c1+c2)/2;
		f0=f(c0);
		a++;
		if((f1*f0)<0){
			c2=c0;
			f2=f0;
		}
		else{
			c1=c0;
			f1=f0;
		}
		
	if((fabs((c2-c1)/c2))>E) goto xyz;
	else{
		printf("The value of root:%f\nNumber of iteration:%f",c0,a);
}
	}

