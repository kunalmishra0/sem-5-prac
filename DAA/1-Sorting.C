#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Swap two numbers */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* ---------------- BUBBLE SORT ---------------- */
long long bubbleSort(int a[], int n, int order)
{
    long long count = 0;
    int i, j, swapped;

    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;
        count++; // loop/control operation

        for (j = 0; j < n - i - 1; j++)
        {
            count++; // comparison

            if ((order == 1 && a[j] > a[j + 1]) ||
                (order == 2 && a[j] < a[j + 1]))
            {
                swap(&a[j], &a[j + 1]);
                count += 3; // swap operations
                swapped = 1;
            }
        }

        count++;

        /* Optimization for best case */
        if (swapped == 0)
            break;
    }

    return count;
}

/* ---------------- SELECTION SORT ---------------- */
long long selectionSort(int a[], int n, int order)
{
    long long count = 0;
    int i, j, pos;

    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        count++;

        for (j = i + 1; j < n; j++)
        {
            count++; // comparison

            if ((order == 1 && a[j] < a[pos]) ||
                (order == 2 && a[j] > a[pos]))
            {
                pos = j;
                count++;
            }
        }

        if (pos != i)
        {
            swap(&a[i], &a[pos]);
            count += 3;
        }

        count++;
    }

    return count;
}

/* ---------------- INSERTION SORT ---------------- */
long long insertionSort(int a[], int n, int order)
{
    long long count = 0;
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        count += 2;

        while (j >= 0 &&
               ((order == 1 && a[j] > key) ||
                (order == 2 && a[j] < key)))
        {
            a[j + 1] = a[j];
            j--;
            count += 2;
        }

        a[j + 1] = key;
        count++;
    }

    return count;
}

/* Copy an array */
void copyArray(int source[], int destination[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        destination[i] = source[i];
}

/* Display array */
void display(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

/* Generate test cases */
void generateArray(int a[], int n, int type)
{
    int i;

    if (type == 1) /* Best case: already sorted ascending */
    {
        for (i = 0; i < n; i++)
            a[i] = i + 1;
    }
    else if (type == 2) /* Average case: random */
    {
        for (i = 0; i < n; i++)
            a[i] = rand() % 1000;
    }
    else /* Worst case: descending */
    {
        for (i = 0; i < n; i++)
            a[i] = n - i;
    }
}

int main()
{
    int sizes[] = {10, 20, 30, 40};
    int n, i, choice, order, type;
    int a[50], b[50];

    long long bubble, selection, insertion;

    srand((unsigned int)time(NULL));

    printf("\n[REDACTED] [REDACTED] 5AIMLB\n\n");

    printf("============================================\n");
    printf("     SORTING ALGORITHMS - STEP COUNT\n");
    printf("============================================\n");

    printf("\nChoose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter choice: ");
    scanf("%d", &order);

    printf("\nChoose case:\n");
    printf("1. Best Case\n");
    printf("2. Average Case\n");
    printf("3. Worst Case\n");
    printf("Enter choice: ");
    scanf("%d", &type);

    printf("\n------------------------------------------------------------\n");
    printf(" Size\t\tBubble\t\tSelection\tInsertion\n");
    printf("------------------------------------------------------------\n");

    for (i = 0; i < 4; i++)
    {
        n = sizes[i];

        generateArray(a, n, type);

        copyArray(a, b, n);
        bubble = bubbleSort(b, n, order);

        copyArray(a, b, n);
        selection = selectionSort(b, n, order);

        copyArray(a, b, n);
        insertion = insertionSort(b, n, order);

        printf(" %d\t\t%lld\t\t%lld\t\t%lld\n",
               n, bubble, selection, insertion);
    }

    printf("------------------------------------------------------------\n");

    /* Demonstrate sorting */
    printf("\nEnter number of elements to demonstrate sorting (max 50): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nOriginal array:\n");
    display(a, n);

    copyArray(a, b, n);
    bubbleSort(b, n, order);
    printf("\nAfter Bubble Sort:\n");
    display(b, n);

    copyArray(a, b, n);
    selectionSort(b, n, order);
    printf("\nAfter Selection Sort:\n");
    display(b, n);

    copyArray(a, b, n);
    insertionSort(b, n, order);
    printf("\nAfter Insertion Sort:\n");
    display(b, n);

    return 0;
}

