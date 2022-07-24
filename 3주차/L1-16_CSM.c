#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool solution(const char* s) 
{
    bool answer = true;
    int index;
    
    for(index=0 ; s[index]!='\0' ; index++)
    {
        if(s[index]<48 || s[index]>57)
        {
            answer=false;
            break;
        }
    }
    if(index!=4 && index!=6)
        answer=false;
    
    return answer;
}
