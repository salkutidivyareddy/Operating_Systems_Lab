#include<stdio.h>
void main()
{
	int str[7]={68,92,112,14,76,10,53};
	int i,j,k,n=7,limit=str[0];
	int head=50;
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
	int hm=0,s=0;
	i=0;
	while(head>str[i])
	{
		i++;
	}
	for(j=i;j<n;j++)
	{
		s=abs(str[j]-head);
		hm=hm+s;
		head=str[j];
	}
	
	for(k=i-1;k>=0;k--)
	{
		s=abs(str[k]-head);
		hm=hm+s;
		head=str[k];	
	}
	printf("the head movement is %d",hm);//164
}
