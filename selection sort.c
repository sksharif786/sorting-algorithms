#include <stdio.h>
//logic for selection sort
void SelectionSort(int a[], int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        
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
    SelectionSort(a, n);
    printf("\nArray after sorting:\n");
    printArray(a, n);
    return 0;
}
