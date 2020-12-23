// #include<stdio.h>

// // Function to swap the the position of two elements
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void heapify(int arr[], int n, int i)
// {
//     // Find largest among root, left child and right child
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;
    
//     if (left < n && arr[left] > arr[largest])
//       largest = left;
    
//     if (right < n && arr[right] > arr[largest])
//       largest = right;
    
//     // Swap and continue heapifying if root is not largest
//     if (largest != i) {
//       swap(&arr[i], &arr[largest]);
//       heapify(arr, n, largest);
//     }
// }

// // Main function to do heap sort
// void heapSort(int arr[], int n)
// {
//     // Build max heap
//     for (int i = n / 2 - 1; i >= 0; i--)
//       heapify(arr, n, i);
    
//     // Heap sort
//     for (int i = n - 1; i >= 0; i--) {
//       swap(&arr[0], &arr[i]);
    
//       // Heapify root element to get highest element at root again
//       heapify(arr, i, 0);
//     }
// }



// float findingMedian(int arr[100000],int d)
// {
//     if(d%2 == 0)
//     {
//         return ((arr[(d/2)-1]+arr[(d/2)])/2)+((arr[(d/2)-1]+arr[(d/2)])%2);
//     }
//     else
//     {
//         return arr[(d/2)];
//     }
// }



// //9 5
// //2 3 4 2 3 6 8 4 5



// int notifications(int n, int d, int arr[100000])
// {
//     int notifications = 0;
//     int day=d;
//     while(day < n)
//     {
//         int requiredDays[d];
//         for(int j=day-1,k=d-1; j>=(day-d),k>=0;  j--,k--)
//         {
//             requiredDays[k] = arr[j];
//         }
//         heapSort(requiredDays,d);
//         float median = findingMedian(requiredDays,d);
        
//         if(arr[day] >= (2*median))
//         {
//             notifications++;
//         }
//         day++;
//     }
//     return notifications;
// }





// int main()
// {
//     int number,days;
//     scanf("%d%d",&number,&days);
//     int array[number];
//     for(int i=0; i<number; i++)
//     {
//         scanf("%d",&array[i]);
//     }
    
//     int result = notifications(number,days,array);
//     printf("%d",result);
    
// }
///////////////////////////Above Code Exceeds time limit for some test cases/////////////////////////////// 





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, d;
    scanf("%d %d", &n, &d);
    
    int* expend = (int*)malloc(n * sizeof(int));
    int* check = (int*)malloc(d * sizeof(int));        
    int i, j;
    
    for(i=0; i<n; i++)
        scanf("%d", (expend+i));
    
    int notifications = 0;
    int first = 1;
    int expend_num[201] = {0};
    
    for(i=d; i<n; i++){               
        
        if(first){
            for(j=0; j<d; j++){
                *(check+j) = *(expend+j+(i-d));
                for(int ni=0; ni<=200; ni++){
                    if(*(check+j) == ni)
                        expend_num[ni]++, ni = 201;                
                }
            }                            
            first = 0;
        }
        else{
            int modify = *(expend+i-d-1);
            expend_num[modify]--;
            modify = *(expend+i-1);
            expend_num[modify]++;
        }
        
        /*for(j=0; j<=200; j++)
            printf("%d ",expend_num[j]);
        printf("\n");   */ 
        
        int find_median = 0;
        int median_2;
        
        for(j=0; j<=200; j++){
            find_median += expend_num[j];
            if(d % 2){
                if(find_median > d/2){
                    median_2 = 2 * j;
                    break;
                }
            }
            else{
                if(find_median > d/2){
                    median_2 = 2 * j;
                    break;
                }
                if(find_median == d/2){
                    median_2 = j;
                    while(expend_num[j+1] == 0) j++;
                    median_2 += j+1;
                    break;
                }
            }            
            
        }        
        
        if(*(expend+i) >= median_2) notifications++;            
    }
    
    printf("%d", notifications);
    
    free(expend), free(check);
    return 0;
}
