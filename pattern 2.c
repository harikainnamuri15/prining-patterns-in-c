#include<stdio.h>
int main()
{
	int i,j,k,n,c=80;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=c/2-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//in a console 'c' 80 characters can be shown horizontally
//0dd numbers formula.....>2k+1(k starting from 0)
//2k-1(k starting from 1)
















