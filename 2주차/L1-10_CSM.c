#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    int* divided_number;
    long long ten_multiple;
    long long cipher=0;
	int check;
	long long temp=0; 
	
	for(ten_multiple=1 ;  ; ten_multiple*=10)  //Convert to a multiple of 10
	{
		if(n>1000000000)
		{
			ten_multiple=1000000000;
			check=1;
			cipher=10;
			break;
		}
		else if(ten_multiple>n)
		{
			check=0;
			break;
		}
			
        cipher++;
	}
	if(check==0)
		ten_multiple/=10; 
    
    divided_number=(int*)malloc((cipher)*4);
    
	
	for(ten_multiple ; ten_multiple>0 ; ten_multiple/=10)	//divide number
	{
		temp=n/ten_multiple;
		temp%=10;
		divided_number[cipher-1]=temp;
		cipher--;
	}
	
    
    return divided_number;
}

void main(void)
{
	long long input=9876543210;
	int*result;
	int n=0;
	
	result=solution(input);
	
	while(n<=9)
	{
		printf("%d",result[n]);
		n++;
	}
	
}
