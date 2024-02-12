//Newton's Interpolation
#include<stdio.h>
#include<math.h>
int main()
{
	float x[100],a[100][100],xp,p,I[100];
	int i,j,n;
	printf("Enter the degree of the polynomial n:");
	scanf("%d",&n);
	printf("Enter the value of x and corresponding functional value as:");
	for(i=0;i<=n;i++)
	{
		scanf("%f%f",&x[i],&a[0][i]);
	}
	printf("Enter the interpolation value xp:");
	scanf("%f",&xp);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			a[i][j]=(a[i-1][j+1]-a[i-1][j])/(x[i+j]-x[j]);
			
		}
	}
	p=a[0][0];
	for(i=1;i<=n;i++)
	{
		I[i]=1;
		for(j=0;j<=i-1;j++)
		{
			I[i]=I[i]*(xp-x[j]);
		}
		p=p+a[i][0]*I[i];
	
	}
	printf("Result:%f",p);
}
