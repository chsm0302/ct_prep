#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) 
{
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(4);
    
    int year[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int month=1;
    int day;    
    int check=1;
    
    for(month=1 ; month<=a ; month++)
    {
        for(day=1 ; day<=year[month] ; day++)
        {            
            if(month==a && day==b)
                break;
            
            if(check<7)
                check++;
            else
                check=1;    
        }   
    }
    
    switch (check) 
    {
        case 1:
            answer="FRI";
            break;
        case 2:
            answer="SAT";
            break;
        case 3:
            answer="SUN";
            break;
        case 4:
            answer="MON";
            break;
        case 5:
            answer="TUE";
            break;
        case 6:
            answer="WED";
            break;
        case 7:
            answer="THU";
            break;
            
    }
    
    return answer;
}
