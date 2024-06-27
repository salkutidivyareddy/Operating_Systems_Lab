#include<stdio.h>
void main()
{
	int str[7]={68,92,112,14,76,10,53};
	int i,j,k,n=7;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(str[j]>str[j+1])
			{
				int t1=str[j];
				str[j]=str[j+1];
				str[j+1]=t1;
			}
		}
	}
	printf("After sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",str[i]);
	}
	
}
