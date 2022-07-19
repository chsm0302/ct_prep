#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int count;
    
    for(count=1 ; count<=n ; count++)
    {
        if(n%count==0)
            answer+=count;
    }
    return answer;
}

void(main)
{
  int n;
  
  printf("%d",solution(n));
}
