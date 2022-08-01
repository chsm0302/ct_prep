#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) 
{
    long long answer=0;
    int i;
    long long cost=0;
    
    for(i=1 ; i<=count ; i++)
    {
        cost=price*i;
        answer=answer+cost;
    }
    if(money>=answer)
        return 0;
    else
        return answer-money;
}

void main(void)
{
	int=price;
  int=money;
  int=count;
    
	printf("%d",solution(price,money,count));
}
