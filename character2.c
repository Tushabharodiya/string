#include<stdio.h>
main()
{
	char low,upp;
	
	printf("Enter Lowercase Character = ");
	scanf("%c",&low);
	
	
	if(low>=65 && low<=90)
	{
		printf("Uppercase Character = %c",low);
	}
	else
	{
		printf("Uppercase Character  = %c",low-32);
	}
}