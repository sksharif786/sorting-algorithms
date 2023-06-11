#include<stdio.h>
#define MAX 20
int arr[MAX];
int partition(int lb, int ub){
    int pivot, start, end, temp;
    pivot = arr[lb];
    start = lb;
    end = ub;
    while(start < end){
        while(arr[start] <= pivot){
            start++;  
        }
        while(arr[end] > pivot){
            end--;
        }
        if(start < end){
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;
    return end;
}
void quickSort(int lb, int ub){
    int loc;
    if(lb < ub){
        loc = partition(lb, ub);
        quickSort(lb, loc-1);
        quickSort(loc+1, ub); 
    }
}
int main()
{
    int i, n;
    printf("Enter number of elements:  ");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    quickSort(0, n-1);
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
