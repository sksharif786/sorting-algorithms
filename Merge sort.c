#include<stdio.h>

void mergesort(int[],int,int);
void merge(int[],int,int,int);

int main()
{
    int a[25],n,i;
    printf("Enter the size of array(Max25):");
    scanf("%d",&n);

     printf("Enter %d elements:",n);
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);

     mergesort(a,0,n-1);

     printf("Sorted elements are:");
     for(i=0;i<n;i++)
     printf("%d" " ",a[i]);
     return 0;

}
void mergesort(int a[], int first, int last)
{
     int mid;
     if(first<last)
     {
         mid=(first+last)/2;
         mergesort(a,first,mid);
         mergesort(a,mid+1,last);
         merge(a,first,mid,last);
     }
}
void merge(int a[], int first,int mid,int last)
{
    int b[25];
    int i,j,k;
    i=first;
    j=mid+1;
    k=first;
    while(i<=mid && j<=last)
    {
         if(a[i]<=a[j])
         {
          b[k]=a[i];
          i++;
          k++;
         }
          else
          {
             b[k]=a[j];
             j++;
             k++;
          }
    }
    if(i>mid)
    {
         while(j<=last)
         {
            b[k]=a[j];
            j++;
            k++;
         }
    }
    else
    {
         while(i<=mid)
         {
           b[k]=a[i];
           i++;
           k++;
         }
    }
    for(i=first;i<=last;i++)
    {
        a[i]=b[i];
    }
}
