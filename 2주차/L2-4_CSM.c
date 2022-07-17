#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    
    long long count;
    
    for(count=1 ;  ; count++)
    {
        if(count*count==n)
        {
            answer=(count+1)*(count+1);
            break;
        }
        else if(count*count>n)
        {
            answer=-1;
            break;
        }
    }
    
    
    return answer;
}
