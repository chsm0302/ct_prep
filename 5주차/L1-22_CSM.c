#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) 
{
    int answer = 0;
    int temp;
    int w_count;
    int h_count;
    int w_big=0;
    int h_big=0;
    
    
    for(w_count=0 ; w_count<sizes_rows ; w_count++)
    {
        if(sizes[w_count][0]<sizes[w_count][1])
        {
            temp=sizes[w_count][0];
            sizes[w_count][0]=sizes[w_count][1];
            sizes[w_count][1]=temp;
        }
     
        if(w_big<sizes[w_count][0])
            w_big=sizes[w_count][0];
        
        if(h_big<sizes[w_count][1])
            h_big=sizes[w_count][1];
    }
    answer=h_big*w_big;
    
    return answer;
}
