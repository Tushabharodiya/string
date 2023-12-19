#include<stdio.h>
main()
{
	char upp,low;
	
	
	printf("Enter Uppercase character = ");
	scanf("%c",&upp);
	
	
	if(upp>=97 && upp<=122)
	{
		printf("Lowercase Character = %c",upp);
	}
	else
	{
		printf("Lowercase Character = %c",upp+32);
	}
		

	
}