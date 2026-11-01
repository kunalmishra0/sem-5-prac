#include <stdio.h>
#include <stdlib.h>

struct Kunal446_Item
{
    int Kunal446_weight;
    int Kunal446_profit;
    double Kunal446_ratio;
};

int Kunal446_compare(const void *Kunal446_a, const void *Kunal446_b)
{
    struct Kunal446_Item *Kunal446_item1 =
        (struct Kunal446_Item *)Kunal446_a;

    struct Kunal446_Item *Kunal446_item2 =
        (struct Kunal446_Item *)Kunal446_b;

    if (Kunal446_item1->Kunal446_ratio < Kunal446_item2->Kunal446_ratio)
        return 1;
    else if (Kunal446_item1->Kunal446_ratio > Kunal446_item2->Kunal446_ratio)
        return -1;
    else
        return 0;
}

int main()
{
    int Kunal446_n, Kunal446_capacity;

    printf("[REDACTED] [REDACTED]\n");

    printf("Enter number of items: ");
    scanf("%d", &Kunal446_n);

    struct Kunal446_Item Kunal446_items[Kunal446_n];

    printf("Enter weight and profit of each item:\n");

    for (int Kunal446_i = 0; Kunal446_i < Kunal446_n; Kunal446_i++)
    {
        scanf("%d %d",
              &Kunal446_items[Kunal446_i].Kunal446_weight,
              &Kunal446_items[Kunal446_i].Kunal446_profit);

        Kunal446_items[Kunal446_i].Kunal446_ratio =
            (double)Kunal446_items[Kunal446_i].Kunal446_profit /
            Kunal446_items[Kunal446_i].Kunal446_weight;
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &Kunal446_capacity);

    qsort(Kunal446_items,
          Kunal446_n,
          sizeof(struct Kunal446_Item),
          Kunal446_compare);

    double Kunal446_maxProfit = 0;

    for (int Kunal446_i = 0; Kunal446_i < Kunal446_n; Kunal446_i++)
    {
        if (Kunal446_capacity >= Kunal446_items[Kunal446_i].Kunal446_weight)
        {

            Kunal446_capacity -=
                Kunal446_items[Kunal446_i].Kunal446_weight;

            Kunal446_maxProfit +=
                Kunal446_items[Kunal446_i].Kunal446_profit;
        }
        else
        {
            Kunal446_maxProfit +=
                Kunal446_items[Kunal446_i].Kunal446_ratio *
                Kunal446_capacity;

            break;
        }
    }

    printf("Maximum Profit = %.2lf\n", Kunal446_maxProfit);

    return 0;
}
