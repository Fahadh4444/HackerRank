#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Complete the repeatedString function below.
long int  repeatedString(char* s, long long int n) 
{
    int i;
    long long int length = strlen(s);
    long long int count=0;
    long long int remaining= 0;
    long long int dividing =0 ;
    long long int remaining_count = 0;
    
    for(i=0 ; i<length ; i++)
    {
        if(s[i] == 'a')
        {
            count++;
        }
    }
    
    remaining = n%length;
    dividing = n/length;
    
    for(i=0 ; i< remaining; i++)
    {
        if(s[i] == 'a')
        {
            remaining_count++;
        }
    }
    
    if(remaining != 0)
    {
        count = ((count*(dividing)) + remaining_count);
    }
    else 
    {
        count = count * dividing;
    }
    
    
    
    
    printf("%lld",count);
    
    return 0;
}



int main()
{
    
    char string[10000];
    scanf("%s",string);
    
    long long int n;
    scanf("%lld",&n);
    
    repeatedString(string,n);
}

