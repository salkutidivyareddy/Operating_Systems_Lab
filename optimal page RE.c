#include<stdio.h>
int n,m,pf=0,k=0,c=0,p[100],a[100],b[100],count=0,y=0,s=0,v[100];
int check2(int i);
int check(int i);
int main(){
	int i,j,h,z,f;
	printf("enter number of pages");
	scanf("%d",&n);
	printf("enter number of frames");
	scanf("%d",&m);
	printf("pages array");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	for(j=0;j<m;j++){
		a[j]=-1;
	}
	for(i=0;i<n;i++){
		if(s==m){
    	if(check(i)){
    		z=check2(i);
    		a[z]=p[i];
    		pf++;
    		for(j=0;j<m;j++){
			   printf("%d ",a[j]);
		}
		printf("\n");
		for(f=i+1;f<n;f++){
			if(p[i]==p[f]){
				break;
			}
			c++;
		}
    		b[z]=c;
    		//printf("%d is %d\n",p[i],b[z]);
    		c=0;
    	}
        	
			
	else{
         for(h=0;h<m;h++){
		            	printf("%d ",a[h]);
        	      }
        	      printf("\n");
				count++;
	}	
}
	else{
		if(check(i)){
	    	a[k]=p[i];
		    for(j=0;j<m;j++){
			   printf("%d ",a[j]);
        	}
	     for(f=i+1;f<n;f++){
	     	if(p[i]==p[f]){
			break;
		    }
		   c++;
		}
	   b[k]=c;
	  // printf("\n%d is %d \n",p[i],b[i]);
	   c=0;
			
        	printf("\n");
			k++;
			pf++;
			s++;
			if(k==m){
				k=0;
			}
		}
		else{
			 for(h=0;h<m;h++){
		            	printf("%d ",a[h]);
        	      }
        	      printf("\n");
				count++;
     	}	
  	
	 }
	}
	
	printf(" page fault: %d\n",pf);
	printf("page hits :%d\n",count);
}
int check2(int i){
	int min=-1,min_i,j;
	for( j=0;j<m;j++){
		if(b[j]>=min){
			min=b[j];
			min_i=j;
		}
		
	}
	return min_i;
}
/*int check3(int i){
	for(int j=0;j<m;j++){
		if(p[i]==a[j]){
			return 0;
		}
		else{
			return 1;
		}
	}
	
}
*/
int check(int i){
	int j,f;
	for(j=0;j<m;j++){
			if(p[i]==a[j]){
				break;
				
				
			}
  }
  if(j==m){
  	return 1;
  }
  else{
  	for( f=i+1;f<n;f++){
  		if(p[i]==p[f]){
  			//printf("hello");
  			break;
		  }
		  c++;

	  }
  	b[j]=b[j]+c;
  	//printf("%d is %d\n",p[i],b[j]);
  	c=0;
  	
  	return 0;
  }
				
}
//7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1 
//7 3 1 0 2 0 1 0 2 4 5
//1 2 3 4 1 2 5 1 2 3 4 5
//enter number of pages12
//enter number of frames3
//pages array
//0 1 2 3 0 1 4 0 1 2 3 4
/*enter number of pages14
enter number of frames4
pages array
7 0 1 2 0 3 0 4 2 3 0 3 2 3
pf:6
nter number of pages15
enter number of frames5
pages array
1 2 3 4 2 1 5 6 2 1 2 3 7 6 3
pf:7
enter number of pages13
enter number of frames4
pages array
0 2 1 6 4 0 1 0 1 3 1 2 1
pf:6
enter number of pages10
enter number of frames3
pages array
4 7 6 1 7 6 1 2 7 2
pf:5
enter number of pages7
enter number of frames3
pages array1 3 0 3 5 6 3
pf:5
*/
