#include<stdio.h>
void main()
{
		int n=20,f=3,i,j,k,l,t=0,p=0,hit=0,pg=0,flag,c=0,index;

	int a[20]={7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0,1,7,0,1};
	int b[f];
	int q[f];

	for(i=0;i<f;i++)
	b[i]=-1;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<f;j++)
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
			if(c>=3)
			{
				pg++;
				index=findmaxindex(b,a,n,f,i);
				b[index]=a[i];
				for(k=0;k<f;k++)
				{
					printf("%d\t",b[k]);
				}
				printf("\n");
				
			}
			else
			{
				pg++;
				c++;
				b[p]=a[i];
				p=(p+1)%f;
				for(k=0;k<f;k++)
				{
					printf("%d\t",b[k]);
				}
				printf("\n");
				
			}
		}
	}
	printf("number of hits are..%d and number of pagefaults are ...%d",hit,pg);
}
int findmaxindex(int b[],int a[],int n,int f,int p)
{
	int index,max=0,i,j,max1=0;
	for(i=0;i<f;i++)
	{
		max=0;
		for(j=p+1;j<n;j++)
		{
			if(b[i]==a[j])
			{
				max=j;
				break;
			}
		}
		if(max==0)	
		{
			
			return i;
		}
		else
		{
			if(max>max1)
			max1=max;
		}
	   
	}
//	printf("max is %d",max);
	for(i=0;i<f;i++)
	{
		if(b[i]==a[max1])
		{
			index=i;
			break;
		}
}
//printf("index is %d",index);
	return index;
}
