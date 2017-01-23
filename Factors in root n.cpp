#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	int n,i,s;
	printf("Enter number : ");
	scanf("%d",&n);
	printf("\n\nFactors of %d are : ",n);
	if(n==1)
	{
		printf("1");
		exit(0);
	}
	s=sqrt(n);
	for(i=1;i<=s;i++)
	{
		if(n%i==0) printf("%d ",i);
	}
	for(i=s;i>0;i--)
	{
		if(n%i==0) printf("%d ",n/i);
	}
}
