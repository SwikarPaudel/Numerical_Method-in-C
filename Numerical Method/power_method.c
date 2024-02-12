//Power Method
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	float e,lambdao=1,lambdan,a[100][100],x[100],xnew[100],temp=0.0;
	printf("Enter order of matrix and tolerable error:\n");
	scanf("%d\n%f",&n,&e);
	//read matrix
	printf("Read the matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	//read initil guess vector x
	for(i=1;i<=n;i++)
	{
		printf("x[%d]:",i);
		scanf("%f",&x[i]);
	}
	//multiplication
	abc:
	for(i=1;i<=n;i++)
	{
		temp=0;
		for(j=1;j<=n;j++)
		{
			temp=temp+a[i][j]*x[j];
		}
		xnew[i]=temp;	
	}
	//replace x by xnew
	for(i=1;i<=n;i++)
	{
		x[i]=xnew[i];
	}
	//finding largest
	lambdan=fabs(x[1]);
	for(i=1;i<=n;i++)
	{
		if (fabs(x[i])>lambdan)
		{
			lambdan=fabs(x[i]);
		}
	}
	//normalization
	for(i=1;i<=n;i++)
	{
		x[i]=x[i]/lambdan;
	}
	//display
	printf("Lambda new:%f",lambdan);
	for(i=1;i<=n;i++)
	{
		printf("%f",x[i]);
	}
	//checking accuracy
	if((fabs(lambdan-lambdao))>e)
	{
		lambdao=lambdan;
		goto abc;
	}
	return 0;
}
