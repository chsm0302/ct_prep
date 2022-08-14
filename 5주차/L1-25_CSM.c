#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long long n) 
{
    unsigned long long answer = 0;
    unsigned long long storage=1;
    unsigned long long temp;
    unsigned long long replica;
    unsigned long long replica_tool=1;
    unsigned long long count=0;
    
    while(n>0)
    {
        temp=(n%3)*storage;
        answer+=temp;
        storage*=10;
        n/=3;
    }
    temp=answer;
    answer=0;
    
    for( ; storage>0 ; storage/=10)
    {
        replica=temp/storage;
        replica%=10;
        answer+=replica*replica_tool;
        replica_tool*=10;
    }
    
    temp=answer/10;
    storage=1;
    
    for(;temp>10 ; temp/=10)
    {
        storage*=10;
        count++;
    }
    
    temp=answer/10;

    for( ; count>0 ; count--)
    {
        replica=temp/storage;
        replica*=3;
        temp%=storage;
        storage/=10;
        temp+=replica*storage;
    }
    
    return temp;
}
