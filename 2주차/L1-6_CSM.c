#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_lenÀº ¹è¿­ arrÀÇ ±æÀÌÀÔ´Ï´Ù.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    int index;
    
    for(index=0 ; index<arr_len ; index++)
    {
    	answer += arr[index];
	}
    answer=answer/(arr_len);
    
	return answer;
}

