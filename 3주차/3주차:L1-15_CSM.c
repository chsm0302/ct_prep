#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) 
{
    int index;
    char* answer;
    
    answer=(char*)malloc(3*n+1);
    
    if(n>0)
        strcpy(answer,"수");
    
    for(index=1;index<n;index++)
    {
        if(index%2==0)
            strcat(answer,"수");
        else
            strcat(answer,"박");
    }
    
    return answer;
}
void main(void)
{
  int input;
  scanf("%d",&input);
  printf("%s",solution(input));
}
