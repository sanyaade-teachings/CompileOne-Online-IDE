#include <stdio.h>

int main() {
	// your code goes here
	char *a;
	char *temp;
	int count=0;
	int i;
	scanf("%s",a);
	for(i=0;a!='\0';i++)
	{
	    a=a+i;
	    temp=a;
	    if(*temp=='1')
	    {
	        temp++;
	        while(*(temp)=='0')
	        {
	            temp++;
	        }
	        if(*temp=='1')
	        count++;
	    }
	    
	}
	printf("%d",count);
	return 0;
}