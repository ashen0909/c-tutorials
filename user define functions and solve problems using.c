//This program is to write user define functions and solve problems using them
#include<stdio.h>

//to add two intergers and return as intergers
int add(int a, int b);

//to multiply two intergers and return as intergers
int multi(int c, int d);

//to sqaure value 
int squr(int r);

int main(void)//functionmain begins program execution
{
	int tot;//declaring variables
	int r;
	int no1 = 3;
	int no2 = 4;
	int no3 = 5;
	int no4 = 7;
	
	printf("%d",squr(add(multi(no1, no2), multi(no3, no4))));//prompt
	
	return 0;//function main ends
}


//function implemention
int add(int a, int b){
	int ans = a + b;
	return ans;
}
int multi(int c, int d){
	int ans = c * d;
	return ans;
}
int squr(int r){
	int ans = r * r;
	return ans;
	
}
