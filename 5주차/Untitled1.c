#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{
    int answer = 0;
    int storage=1;
    int temp;
    int replica;
    int replica_tool=1;
    int count=0;
    
    while(n>=1)
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
