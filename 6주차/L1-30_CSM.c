#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) 
{
    int answer = 0;
    bool num_check[10]={false,};
    int index;
    
    for(index=0 ; index<numbers_len ; index++)
        num_check[numbers[index]]=true;
    
    
    for(index=0 ; index<10 ; index++)
        if(num_check[index]==false)
            answer+=index;
     
    return answer;
}
