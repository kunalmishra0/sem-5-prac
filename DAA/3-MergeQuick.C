/* AIM:- To sort a set of numbers using (i) Merge Sort and (ii) Quick
Sort using the Divide and Conquer method. */

#include <stdio.h>
void merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    int temp[100];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= high)
        temp[k++] = arr[j++];
    for (i = low, k = 0; i <= high; i++, k++)
        arr[i] = temp[k];
}
void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    printf("[REDACTED] [REDACTED]\n");
    int n, choice;
    printf("1. Merge Sort\n");
    printf("2. Quick Sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Original Array: ");
    display(arr, n);
    if (choice == 1)
        mergeSort(arr, 0, n - 1);
    else if (choice == 2)
        quickSort(arr, 0, n - 1);
    else
    {
        printf("Invalid choice!\n");
        return 0;
    }
    printf("Sorted Array: ");
    display(arr, n);
    return 0;
}
