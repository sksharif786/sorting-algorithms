#include <stdio.h>

void insertionSort(int a[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && key <= a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

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
    insertionSort(a, n);
    printf("\nArray after sorting:\n");
    printArray(a, n);
    return 0;
}
