#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) 
{
    long long answer = 0;
    int count;
    int temp;
    
    if(b<a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    for(count=a ; count<=b ; count++)
        answer+=count;
    
    return answer;
}
void main(void)
{
  int input_a,input_b;
  printf("%d",solution(input_a,input_b));
}
    
