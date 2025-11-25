#include<stdio.h>
int main()
{
	//Declare the variables
	int a,b,c,max;
	//Get the three numbers from user
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	//Check if a>b,if yes,exp1 executes,if not,exp2 exectes
	max=a>b?(a>c?a:c):(b>c?b:c);
	//print the result
	printf("Largest among the three numbers is %d",max);
	return 0;
}
