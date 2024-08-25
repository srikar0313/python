#include <stdio.h>
#include <stdlib.h>
void linearsearch(int arr[], int n)
{
    int search = 4;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == search)
        {
            printf("the element is found at %d", i + 1);
        }
    }
}
void linearrecurssive(int arr[],int i,int n)
{int search=4;
    if(i<n)
    {
        if(arr[i]==search)
        {
            printf("found the element %d",i+1);
        }
        else
        {
         linearrecurssive(arr,i+1,n);
        }
    }    
}
void binarysearch(int arr[], int n)
{
    int search = 4;
    int low = 0;
    int high = n - 1;
    while(low<high)
    {int mid = (low + high) / 2;
        if (arr[mid] == search)
        {
            printf("\nelement is found %d", mid + 1);
            break;
        }
        else if(arr[mid] > search)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}
void binaryrecurssive(int arr[],int low,int high)
{ int search=4;
    if(low<=high)
    {int mid=(low+high)/2;
      if(arr[mid]==search)
       {
         printf("the element is found at %d",arr[mid]);
       }
       else if (arr[mid]>search)
       {
        binaryrecurssive(arr,low,mid-1);
       }
       else
       {
        binaryrecurssive(arr,mid+1,high);
       }
      
    }
}
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    //linearsearch(arr, n);
   // binarysearch(arr, n);
   binaryrecurssive(arr,0,n);
   linearrecurssive(arr,0,n);
}