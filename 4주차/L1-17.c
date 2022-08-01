#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) 
{
    char* answer = (char*)malloc(strlen(s)+1);
    int index;
    int count=0;
    char temp;
    
    strcpy(answer,s);
    
    do
    {
        count=0;
        for(index=0 ; answer[index+1]!='\0' ; index++)
        {
            if(answer[index]<answer[index+1])
            {
                temp=answer[index];
                answer[index]=answer[index+1];
                answer[index+1]=temp;
                count++;
            }
        }
    }
    while(count!=0);
    
    return answer;
}
void main(void)
{
	char s[]="asdadadDADWa";
	printf("%s",solution(s));
}
