#include<stdio.h>
#include<string.h>
main()
{
	char n[100];
	int i,len,p=0;
    printf("Enter a string:");
    gets(n);
    len = strlen(n);
    for(i=0;i < len ;i++)
	{
        if(n[i] != n[len-i-1])
		{
            p = 1;
       		break;
   		}
	}
	printf(strrev(n));
    if (p==0) 
	{
        printf("\nString is a palindrome");
    }    
    else 
	{
        printf("\nString is not a palindrome");
    }
}

