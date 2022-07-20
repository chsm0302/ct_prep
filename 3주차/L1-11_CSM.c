#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{
    int answer = 0;
    int ten_multiple;
    int temp;
    int cipher=0;
    
    for(ten_multiple=1 ;  ; ten_multiple*=10)  //Convert to a multiple of 10
	{
		
		if(ten_multiple>n)
			break;	
        cipher++;
	} 
    
	for(ten_multiple ; ten_multiple>0 ; ten_multiple/=10)	//divide number
	{
		temp=n/ten_multiple;
		temp%=10;
		answer+=temp;
		cipher--;
	}
    
    return answer;
}
