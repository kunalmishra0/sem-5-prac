/* AIM: WAP to solve knapsack problem using Greedy Algorithm. */

#include <stdio.h>
#include <stdlib.h>

struct Item
{
    int weight;
    int profit;
    double ratio;
};

int compare(const void *a, const void *b)
{
    struct Item *item1 =
        (struct Item *)a;

    struct Item *item2 =
        (struct Item *)b;

    if (item1->ratio < item2->ratio)
        return 1;
    else if (item1->ratio > item2->ratio)
        return -1;
    else
        return 0;
}

int main()
{
    int n, capacity;


    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    printf("Enter weight and profit of each item:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",
              &items[i].weight,
              &items[i].profit);

        items[i].ratio =
            (double)items[i].profit /
            items[i].weight;
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);

    qsort(items,
          n,
          sizeof(struct Item),
          compare);

    double maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        if (capacity >= items[i].weight)
        {

            capacity -=
                items[i].weight;

            maxProfit +=
                items[i].profit;
        }
        else
        {
            maxProfit +=
                items[i].ratio *
                capacity;

            break;
        }
    }

    printf("Maximum Profit = %.2lf\n", maxProfit);

    return 0;
}

