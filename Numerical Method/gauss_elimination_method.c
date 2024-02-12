//Gauss elimination method
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n;
	float a[100][100],ratio,X[100];
	printf("Enter the size of matrix\n");
	scanf("%d",&n);
	//input augmented coeff matrix(a)
	printf("Enter the element of matrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			scanf("%f\n",&a[i][j]);
		}
	}
	//apply gauss elimination on matrix a
	for(i=1;i<=n;i++)
	{
		if(a[i][i]==0)
		{
			printf("Mathematical Error!!\n");
			return 0;
		}
		for(j=i+1;j<=n;j++)
		{
			ratio=a[j][i]/a[i][i];
			for(k=1;k<=n+1;k++)
			{
				a[j][k]=a[j][k]-ratio*a[i][k];
			}
		}
	}
	//obtaining solution by back substitution
	X[n]=a[n][n+1]/a[n][n];
	for(i=n-1;i>=1;i--)
	{
		X[i]=a[i][n+1];
		for(j=i+1;j<=n;j++)	
		{
			X[i]=X[i]-a[i][j]*X[j];
		}
		X[i]=X[i]/a[i][i];
	}
	//display
	for(i=1;i<=n;i++)
	{
		printf("%f\n",X[i]);
	}
	return 0;
	
}
