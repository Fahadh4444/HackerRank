#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Complete the hourglassSum function below.
int hourglassSum(long long int a[6][6])
{
    long long int sum = 0;
    long long int max_sum;
    
    max_sum=a[0][0]+a[0][1]+a[0][2]+a[1][1]+a[2][0]+a[2][1]+a[2][2];
    
    for(int i = 0; i< 4; i++)
    {
        for(int j =  0; j<4; j++)
        {
           sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
//           printf("%d %d %d %d %d %d %d \n",a[i][j],a[i][j+1],a[i][j+2],a[i+1][j+1],a[i+2][j],a[i+2][j+1],a[i+2][j+2]);
           
           if(sum > max_sum)
           {
               max_sum = sum;
           }
           sum = 0;
        }
    }
    
    
    printf("%lld",max_sum);
    return 0;
}

int main()
{
    long long int arr[6][6];
    
    for(int i=0; i< 6; i++)
    {
        for(int j=0; j<6; j++)
        {
            scanf("%lld",&arr[i][j]);
        }
    }
    
    
//    for(int i=0; i< 6; i++)
//    {
//        for(int j=0; j<6; j++)
//        {
//             printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//    }
   
   
    hourglassSum(arr);
    return 0;
}
