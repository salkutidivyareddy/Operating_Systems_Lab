#include<stdio.h>
void main()
{
	int str[7]={68,92,112,14,76,10,53};
	int head=50;
	int i=0;
	
	int tot_hm=0;
	if(str[i]>head)
	 tot_hm=str[i]-head;
	else
	tot_hm=head-str[i];
	
	for(i=0;i<6;i++)
	{
		if(str[i+1]>str[i])
		tot_hm=tot_hm+str[i+1]-str[i];
		else
		tot_hm=tot_hm+str[i]-str[i+1];
	}
	printf("the total head movement is %d",tot_hm);
	
	
}
