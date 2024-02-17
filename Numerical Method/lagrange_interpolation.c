//Lagrange Interpolation
#include<stdio.h>
int main()
{
	float x[100],p,f[100],xp,I[100];
	int n,i,j;
	printf("Enter the degree of the polynimial n:");
	scanf("%d",&n);
	printf("Enter the value of x[i] and f[i]");
	for(i=0;i<=n;i++)
	{
		scanf("%f%f",&x[i],&f[i]);
		printf("\n");
	}
	printf("Enter the interpolation value xp");
	scanf("%f",&xp);
	for(i=0;i<=n;i++)
	{
		I[i]=1;
		for(j=0;j<=n;j++)
		{
			if(i!=j){
				I[i]=I[i]*((xp-x[j])/(x[i]-x[j]));	
			}
		}
		p=p+f[i]*I[i];
	}
	printf("Result:%f",p);
	return 0;
}
