#include<stdio.h>
main()
{
	char email[100]="hepi",email1[100];
	char password[100]="1234",password1[100];
	printf("Enter the email=");
	scanf("%s",&email1);
	printf("Enter the password=");
	scanf("%s",&password1);
	
	if(strcmp(email,email1)==0 && strcmp(password,password1)==0 )
	{
		
			printf("\nLogin sucess.");
	}
	else
	{
			printf("\nLogin not sucess.");
	}
	
}
