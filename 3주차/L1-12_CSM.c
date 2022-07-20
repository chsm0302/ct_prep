#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) 
{
    char* answer=(char*)malloc(strlen(s)+1);
    int index;
    int len;
    int count=0;
    
	for(index=0 ; ; index++)
    {
    	if(s[index]=='\0')
		{
			answer[index]=s[index];
			break;			
		}
    	else if(s[index]==' ')
    	{
    		count=-1;
    		answer[index]=s[index];
		}	
    		
    	else if(count%2==0)
    	{
    		if(s[index]>=97)
    			answer[index]=s[index]-32;
			else	
				answer[index]=s[index];
		}	
    		
    	else
    	{
    		if(s[index]<97)
    			answer[index]=s[index]+32;
    		else
    			answer[index]=s[index];
    		
		}
    		
    	
    	count++;
    	
	}
    return answer;
}
void main(void)
{
	char* a="abc asd asd sa    ";
	printf("%s",solution(a));
}
