#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    long long number=(long long)num;
    
    
    while(number!=1)
    {
        if(number%2==0)
            number/=2;
        else
        {
            number=number*3;
            number++;
        }
        ++answer;
        
        if(answer>=500)
        {
            answer=-1;
            break;
        }
    }
    
    return answer;
}
