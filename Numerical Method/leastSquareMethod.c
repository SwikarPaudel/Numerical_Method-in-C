//least square method
#include<stdio.h>
int main(){
	float x[10],y[10],sumx,sumy,sumxx,sumxy,a,b;
	int n,i;
	printf("Read the no. of data points n:");
	scanf("%d",&n);
	printf("Read the value of x and corresponding y:");
	for(i=1;i<=n;i++){
		scanf("%f%f",&x[i],&y[i]);
	}
	sumx=0;sumxx=0;sumy=0;sumxy=0;
	for(i=1;i<=n;i++)
	{
		sumxx=sumxx+x[i]*x[i];
		sumx=sumx+x[i];
		sumxy=sumxy+x[i]*y[i];
		sumy=sumy+y[i];
	}
	b=(n*sumxy-sumx*sumy)/(n*sumxx-sumx*sumx);
	a=(sumy-b*sumx)/n;
	printf("a=%f b=%f",a,b);
	return 0;
}
