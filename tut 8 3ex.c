#include<stdio.h>
#define size 5
int main (void)
{
	int motion[size]= {0};
	int i,j,temp;
	
	
	
	for(i = 0;i < size; i++)
    {
    	printf("ENTER VALUSE %d  : ",i + 1);
    	scanf("%d",&motion[i]);
    }
	    for(i = 0;i < 1; i++)
	    {
	    	temp = motion [0];
	    	for(j = 0;j < size; j++)
		{
		   motion [j] = motion [j + 1];
        
	}
		motion[size - 1] = temp;
	}

	printf("\n Arry elements after rotate :");
       for(i = 0;i < size; i++)
       {
       	printf("%d",motion[i]);
	   }

	return 0;
}
