#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

long long reverse(long long n) {
    long long divided_number=0;
    long long ten_multiple;
    long long cipher=0;
	int check;
	long long temp=0; 
    long long muti=1;
	
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
    
	
	for(ten_multiple ; ten_multiple>0 ; ten_multiple/=10)	//divide number
	{
		temp=n/ten_multiple;
		temp%=10;
		divided_number+=temp*muti;
		cipher--;
        muti*=10;
	}
	
    
    return divided_number;
}


// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) 
{
    long long answer = 0;
    long long s_index;
    long long s_check_index;
    long long ten_muti=1;
    long long num_index;
    long long number;
    long long check=0;
    char comparison[11][6]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    
    for(s_index=0 ; s[s_index]!='\0' ; s_index++)
    {
        if(s[s_index]>=48 && s[s_index]<=57)
        {
            answer+=(s[s_index]-48)*ten_muti;
            ten_muti*=10;
        }
            
        
        else
        {
            for(number=0 ; number<=9 ; number++)
            {
                s_check_index=s_index;
                
                for(num_index=0 ; comparison[number][num_index]!='\0' ; num_index++)
                {
                    if(s[s_check_index] != comparison[number][num_index])
                    {
                        check=1;
                        break;
                    }
                    s_check_index++;
                }   
                
                if(check==0)
                {
                    answer+=number*ten_muti;
                    s_index=s_check_index-2;
                    ten_muti*=10;
                    break;
                }
                else
                    check=0;
            }
        }
    }
   answer = reverse(answer); 
    
    
    
    return answer;
}
