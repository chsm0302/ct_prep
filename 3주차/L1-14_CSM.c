#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    int index=1;
    bool sign=true;
    int len;
    int ten_multiple=1;
    int temp=0;
    
    len=strlen(s);
        
    while(len-1>0)
    {
        ten_multiple*=10;
        len--;
    }
    
    if(s[0]==43)
    {
        sign=true;
        ten_multiple/=10;
    }
        
    else if(s[0]==45)
    {
        sign=false;
        ten_multiple/=10;
    }
        
    else
        index--;
    
    for( ; ten_multiple*10>1 ; index++)
    {
        temp=s[index]-48;
        
        answer+=temp*ten_multiple;
        ten_multiple/=10;
    }

    if(sign==false)
    {
        temp=answer*2;
        answer-=temp;
    }
    
    return answer;
}
