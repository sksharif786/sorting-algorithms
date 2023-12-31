#include <stdio.h>

//logic for bubble sort
void BubbleSort(int a[], int n)
{
    
    for (int i = 0; i < n - 1; i++)
    {
        
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                
            }
        }
        
    }
}
//print the elements
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[] = {64, 25, 12, 22, 11, 90};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Array before sorting:\n");
    printArray(a, n);
    BubbleSort(a, n);
    printf("\nArray after sorting:\n");
    printArray(a, n);
    return 0;
}
