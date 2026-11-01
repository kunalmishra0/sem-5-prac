#include <stdio.h>

struct Kunal446_Job
{
    char Kunal446_id;
    int Kunal446_deadline;
    int Kunal446_profit;
};

void Kunal446_sortJobs(struct Kunal446_Job Kunal446_jobs[], int Kunal446_n)
{
    int Kunal446_i, Kunal446_j;
    struct Kunal446_Job Kunal446_temp;

    for (Kunal446_i = 0; Kunal446_i < Kunal446_n - 1; Kunal446_i++)
    {
        for (Kunal446_j = 0; Kunal446_j < Kunal446_n - Kunal446_i - 1; Kunal446_j++)
        {
            if (Kunal446_jobs[Kunal446_j].Kunal446_profit <
                Kunal446_jobs[Kunal446_j + 1].Kunal446_profit)
            {
                Kunal446_temp = Kunal446_jobs[Kunal446_j];
                Kunal446_jobs[Kunal446_j] = Kunal446_jobs[Kunal446_j + 1];
                Kunal446_jobs[Kunal446_j + 1] = Kunal446_temp;
            }
        }
    }
}

void Kunal446_jobSequencing(struct Kunal446_Job Kunal446_jobs[], int Kunal446_n)
{
    int Kunal446_i, Kunal446_j;
    int Kunal446_maxDeadline = 0;
    int Kunal446_totalProfit = 0;

    printf("[REDACTED] [REDACTED]\n");

    for (Kunal446_i = 0; Kunal446_i < Kunal446_n; Kunal446_i++)
    {
        if (Kunal446_jobs[Kunal446_i].Kunal446_deadline >
            Kunal446_maxDeadline)
        {
            Kunal446_maxDeadline = Kunal446_jobs[Kunal446_i].Kunal446_deadline;
        }
    }

    char Kunal446_slot[Kunal446_maxDeadline + 1];

    for (Kunal446_i = 0; Kunal446_i <= Kunal446_maxDeadline; Kunal446_i++)
    {
        Kunal446_slot[Kunal446_i] = '-';
    }

    Kunal446_sortJobs(Kunal446_jobs, Kunal446_n);

    for (Kunal446_i = 0; Kunal446_i < Kunal446_n; Kunal446_i++)
    {
        for (Kunal446_j = Kunal446_jobs[Kunal446_i].Kunal446_deadline;
             Kunal446_j > 0; Kunal446_j--)
        {
            if (Kunal446_slot[Kunal446_j] == '-')
            {
                Kunal446_slot[Kunal446_j] = Kunal446_jobs[Kunal446_i].Kunal446_id;

                Kunal446_totalProfit += Kunal446_jobs[Kunal446_i].Kunal446_profit;

                break;
            }
        }
    }

    printf("\nJob Sequence: ");

    for (Kunal446_i = 1; Kunal446_i <= Kunal446_maxDeadline; Kunal446_i++)
    {
        if (Kunal446_slot[Kunal446_i] != '-')
        {
            printf("%c ", Kunal446_slot[Kunal446_i]);
        }
    }

    printf("\nMaximum Profit = %d\n", Kunal446_totalProfit);
}

int main()
{
    int Kunal446_n, Kunal446_i;

    printf("Enter number of jobs: ");
    scanf("%d", &Kunal446_n);

    if (Kunal446_n <= 0)
    {
        printf("Invalid number of jobs.\n");
        return 1;
    }

    struct Kunal446_Job Kunal446_jobs[Kunal446_n];

    printf("\nEnter Job ID, Deadline and Profit:\n");

    for (Kunal446_i = 0; Kunal446_i < Kunal446_n; Kunal446_i++)
    {
        printf("Job %d: ", Kunal446_i + 1);

        scanf(" %c %d %d",
              &Kunal446_jobs[Kunal446_i].Kunal446_id,
              &Kunal446_jobs[Kunal446_i].Kunal446_deadline,
              &Kunal446_jobs[Kunal446_i].Kunal446_profit);
    }

    Kunal446_jobSequencing(Kunal446_jobs, Kunal446_n);

    return 0;
}
