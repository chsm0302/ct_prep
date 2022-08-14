#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) 
{
    int answer = 0;
    int* arr= malloc(sizeof(int)*nums_len*nums_len-1*nums_len-2);
    int index=0;
    int check,overlap_check;
    int answer_check=0;
    int first,second,third;
    bool overlap=false;
    int count=0;
    
    nums_len--;
    
    for(first=0 ; first<=nums_len-2 ; first++)
    {   
        for(second=first+1 ; second<=nums_len-1 ; second++)
        {
            for(third=second+1 ; third<=nums_len ; third++)
            {
                //-----------------------------------
                /*for(overlap_check=0 ; overlap_check<index ; overlap_check++) // check overlap 
                {
                    if(arr[overlap_check] == arr[first] + arr[second] + arr[third])
                    {
                        overlap=true;
                        break;
                    }
                }
                //-----------------------------------*/
                if(overlap==false)
                {
                    arr[index]= nums[first] + nums[second] + nums[third];
                    for(check=2 ; check<arr[index] ; check++)
                    {
                        if(arr[index]%check==0)
                        {
                            answer_check=1;
                            break;
                        }     
                    }
                    index++;
                    if(answer_check==0)
                        answer++;
                    answer_check=0;
                }
                overlap=false; 
            }
        }
        
    }
    
    
    return answer;
}
