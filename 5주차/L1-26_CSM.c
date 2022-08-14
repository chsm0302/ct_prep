#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) 
{
    int answer = 0;
    int count;
    int i;
    
    for(left ; left<=right ; left++)
    {
        count=1;
        for(i=2 ; i<=left ; i++)
        {
            if(left%i==0)
                count++;
            
        }
        if(count%2==0)
            answer+=left;
        else
            answer-=left;
    }
    return answer;
}
