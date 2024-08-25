#include <stdio.h>
#include <stdlib.h>
void array(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("the elemnts are %d   ", arr[i]);
    }
    printf("\n");
}
void insertionsort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
void bubblesort(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void selectionsort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
void main()
{
    int arr[] = {12, 22, 32, 42, 1, 2, 3, 53, 221, 69};
    int n = sizeof(arr) / sizeof(int);
    array(arr, n);
    insertionsort(arr, n);
    array(arr, n);
    bubblesort(arr, n);
    array(arr, n);
    selectionsort(arr, n);
    array(arr, n);
}
