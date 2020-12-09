#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int jumpingOnClouds(int n, int clouds[n]) 
{
    int i=0;
    int jumps=0;
    
    while(i<n-1)
    {
    	if(clouds[i+2] == 0)
    	{
    		i= i+2;
    		jumps++;
		}
		else
		{
			i++;
			jumps++;
		}
	}
    
    
    printf("%d",jumps);
    return 0;
}



int main()
{
    int n,i;
    scanf("%d",&n);
    int clouds[n];
    for(i=0; i<n ; i++)
    {
        scanf("%d",&clouds[i]);
    }
    
    jumpingOnClouds(n, clouds);
    
}
