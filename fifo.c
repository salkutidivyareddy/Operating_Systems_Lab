#include<stdio.h>
void main()
{
	int a[12]={1,2,3,4,1,2,5,1,2,3,4,5};
	int i,j,p=0,hit=0,pg=0,n=12,k=0,flag=0;
	int b[3]={-1,-1,-1};
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<3;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
			
		}
		if(flag==1)
		{
			hit++;
		}
		else
		{
		pg++;
		b[p]=a[i];
		p=(p+1)%3;
		for(k=0;k<3;k++)
		printf("%d\t",b[k]);
		printf("\n");
		}
		
		
	}
	printf("Number of pagefaults are ...%d and Number of hits are %d",pg,hit);
}
