/* AIM: WAP to solve job scheduling problem with deadline using Greedy algorithm. */

#include <stdio.h>

struct Job
{
    char id;
    int deadline;
    int profit;
};

void sortJobs(struct Job jobs[], int n)
{
    int i, j;
    struct Job temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (jobs[j].profit <
                jobs[j + 1].profit)
            {
                temp = jobs[j];
                jobs[j] = jobs[j + 1];
                jobs[j + 1] = temp;
            }
        }
    }
}

void jobSequencing(struct Job jobs[], int n)
{
    int i, j;
    int maxDeadline = 0;
    int totalProfit = 0;


    for (i = 0; i < n; i++)
    {
        if (jobs[i].deadline >
            maxDeadline)
        {
            maxDeadline = jobs[i].deadline;
        }
    }

    char slot[maxDeadline + 1];

    for (i = 0; i <= maxDeadline; i++)
    {
        slot[i] = '-';
    }

    sortJobs(jobs, n);

    for (i = 0; i < n; i++)
    {
        for (j = jobs[i].deadline;
             j > 0; j--)
        {
            if (slot[j] == '-')
            {
                slot[j] = jobs[i].id;

                totalProfit += jobs[i].profit;

                break;
            }
        }
    }

    printf("\nJob Sequence: ");

    for (i = 1; i <= maxDeadline; i++)
    {
        if (slot[i] != '-')
        {
            printf("%c ", slot[i]);
        }
    }

    printf("\nMaximum Profit = %d\n", totalProfit);
}

int main()
{
    int n, i;

    printf("Enter number of jobs: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of jobs.\n");
        return 1;
    }

    struct Job jobs[n];

    printf("\nEnter Job ID, Deadline and Profit:\n");

    for (i = 0; i < n; i++)
    {
        printf("Job %d: ", i + 1);

        scanf(" %c %d %d",
              &jobs[i].id,
              &jobs[i].deadline,
              &jobs[i].profit);
    }

    jobSequencing(jobs, n);

    return 0;
}

