#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//    long int n,m;
//    scanf("%ld",&n);
//    scanf("%ld",&m);
//    long int *arr;
//    arr = (long int *)malloc(sizeof(long int)*n);
//
//    for(long int i = 0; i<n; i++)
//    {
//        arr[i]=0;
//    }
//    
//    long int max=0;
//    for(long int j=0; j<m; j++)
//    {
//        long int a,b,k;
//        scanf("%ld%ld%ld",&a,&b,&k);
//        for(long int y = a-1; y<b; y++)
//        {
//            arr[y]= arr[y] + k;
//            if(arr[y] > max)
//            {
//                max = arr[y];
//            }
//        }
//    }
//    printf("%ld",max);
//    return 0;
//}



///////////////////////////////////////Above algorithm works for O(n*m), which increase time limit//////////////////////////////////////////////////

int main()
{
    long int n,m;
    scanf("%ld",&n);
    scanf("%ld",&m);
    long int *arr;
    arr = (long int *)malloc(sizeof(long int)*n);
	long int max =0 ;
	
    for(long int i = 0; i<n; i++)
    {
        arr[i]=0;
    }
    
    for(long int j = 0; j<m; j++)
    {
        long int a,b,k;
        scanf("%ld%ld%ld",&a,&b,&k);
        arr[a-1] = arr[a-1]+k;
        arr[b] = arr[b]-k;
	}
	
	for(long int x = 1; x<n; x++)
	{
		arr[x] = arr[x] + arr[x-1];
		if(arr[x] > max)
		{
			max = arr[x];
		}
	}
	printf("%ld",max);
	return 0;
}
