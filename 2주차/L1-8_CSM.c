#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer;
    
    if(num%2==0)
    {
        answer=(char*)malloc(5);
        answer="Even";
    }
    else
    {
        answer=(char*)malloc(4);
        answer="Odd";
    }
    
    return answer;
}
