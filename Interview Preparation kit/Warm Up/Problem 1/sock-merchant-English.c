#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int sockMerchant(int n, int arr[100]) {
    
    int i,j;
    int count =0;

    for(i=0; i<n ; i++)
    {
        if(arr[i] != 0)
        {
            for(j=(i+1); j<n; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    arr[j] = 0;
                    break;
                }
            }
        }
    }
    
    return count;
    
}

int main()
{

    int n;
    int i;
    
    scanf("%d",&n);
    
    int arr[n];
    
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int socks;
    
    socks = sockMerchant(n, arr);
    
    printf("%d",socks);
    
}
