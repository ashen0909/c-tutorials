#include<stdio.h>
int main (void)
{
	int mark[10];
	int i;
	float avg =0;
	int total =0;
	
	printf("ENTER STUDENT Marks\n\n");
	for(i=0;i<10;i++)
    {
    	printf("ENTER STUDENT %d Marks : ",i+1);
    	scanf("%d",&mark[i]);
	     
	    if(mark[i]< 0 || mark[i] > 20)
	    {
	    	printf(" Invalid Mark\n");
	    	--i;
		}
		total = total + mark[i];
    }
	avg = total / 10.0;
	printf("\n Mark Student\n");
	for(i = 0;i < 10;i++)
	{
		printf("\n Mark Student %d = %d",i+1,mark[i]);
		
	}
	printf("\n\n Average Mark ");
	printf("\n\n Average Mark = %.2f",avg );
	return 0;
}
