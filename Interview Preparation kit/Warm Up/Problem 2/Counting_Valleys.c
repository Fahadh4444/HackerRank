#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void countingValleysTwo(long int steps, char path[steps])
{
    int sealevel = 0;
    int valleys=0;
    int i;
    
    if(path[0] == 'U')
        sealevel++;
    else
        sealevel--;  
    
    for(i=1; i<steps ; i++)
    {
        if(sealevel>0)
        {
            if(path[i] == 'U')
            {
                sealevel++;
            }
            else
            {
                sealevel--;
            }
        }
        else if(sealevel<0)
        {
            if(path[i] == 'U')
            {
                sealevel++;
            }
            else
            {
                sealevel--;
            }
        }
        else
        {
            if(path[i-1] == 'U')
            {
                valleys++;
            }
            
            if(path[i] == 'U')
            {
                sealevel++;
            }
            else
            {
                sealevel--;
            }
        }
    }
    
    if(path[i-1] == 'U')
    {
        valleys++;
    }
    
    printf("%d",valleys);
}


int main()
{
    long int steps, i;
    scanf("%ld",&steps);
    char hikes[steps];
    scanf("%s",hikes);

    countingValleysTwo(steps, hikes);
}
