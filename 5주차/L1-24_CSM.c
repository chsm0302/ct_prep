#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int numbers[], size_t numbers_len) 
{
    int* answer = (int*)malloc(sizeof(int)*numbers_len*numbers_len);
    int count;
    int sum_count;
    int result_count=0;
    int check;
    int sort_count1,sort_count2;
    bool overlap=false;
    int temp;
    
    
   
    
    for(count=0 ; count<numbers_len ; count++)
    {   
        for(sum_count=count+1 ; sum_count<numbers_len ; sum_count++)
        {
            for(check=0 ; check<result_count ; check++)
            {
                if(answer[check]==numbers[count]+numbers[sum_count])
                {
                    overlap=true;
                    break;
                }
            }
            if(overlap==false)
            {
                answer[result_count]=numbers[count]+numbers[sum_count];
                result_count++;
            }
            overlap=false;
        }
        
    }
    for(sort_count1=0;sort_count1<result_count;sort_count1++)   
	{
		for(sort_count2=sort_count1+1;sort_count2<result_count;sort_count2++)
		{
			if(answer[sort_count1]>answer[sort_count2])
			{
				temp=answer[sort_count1];
				answer[sort_count1]=answer[sort_count2];
				answer[sort_count2]=temp;
			}
		}
	}
     
        
    return answer;
}
