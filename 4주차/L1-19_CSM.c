#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) 
{
    char* answer = (char*)malloc(3-strlen(s)%2);
    int half=strlen(s);
    
    if(half%2!=0)
    {
        half=half/2;
        answer[0]=s[half];
        answer[1]='\0';
    }
        
    else
    {
        half/=2;
        answer[0]=s[half-1];
        answer[1]=s[half];
        answer[2]='\0';
    }
    return answer;
}
void main(void)
{
	char s[]="asdadadDADWa";
	printf("%s",solution(s));
}
