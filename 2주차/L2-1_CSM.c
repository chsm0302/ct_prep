#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len�� �迭 arr�� �����Դϴ�.
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

