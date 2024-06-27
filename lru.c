#include<stdio.h>
void main()
{
	int n,f,i,j,k,l,t=0,p=0,hit=0,pg=0,flag,c=0;
	printf("enter n value and no of frames");
	scanf("%d%d",&n,&f);
	int a[n];
	int b[f];
	int q[f];
	printf("enter the strings");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
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
			for(k=0;k<f;k++)
			{
				if(b[j]==q[k])
				break;			
			}
			for(j=k;j<f-1;j++)
			{
				q[j]=q[j+1];
			}
			q[j]=a[i];


		}
		else
		{
			if(c>=f)
			{
			
			pg++;
			for(l=0;l<f;l++)
			{
				if(b[l]==q[0])
				break;
			}
			
		
			b[l]=a[i];
			for(l=0;l<f-1;l++)
			{
				q[l]=q[l+1];
			}
			q[2]=a[i];
			for(k=0;k<f;k++)
			printf("%d\t",b[k]);
			printf("\n");
		}
		else
		{
			pg++;
			c++;
			b[p]=a[i];
			q[t]=a[i];
			t=(t+1)%f;
			p=p+1;
			for(k=0;k<f;k++)
			printf("%d\t",b[k]);
			printf("\n");
		}
			
			
		}
	}
	printf("number of page faults are ...%d and number of hits are ....%d",pg,hit);
}
