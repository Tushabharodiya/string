#include<stdio.h>
main()
{
	char name[]="red";
	
	int i;
	
	printf("String Of Uppercase = ");
	for(i=0;i<=2;i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			printf("%c",name[i]);
		}
		else
		{
			printf("%c",name[i]-32);
		}
	}
}