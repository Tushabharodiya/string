#include<stdio.h>
main()
{
	int i;
	
	char name[]="DEVLOPMENT";
	
	printf("String Of Lowercase = ");
	for(i=0;i<=10;i++)
	{
		if(name[i]>=97 && name[i]<=122)
		{
			printf("%c",name[i]);
		}
		else
		{
			printf("%c",name[i]+32);
		}
	}
	
	
}