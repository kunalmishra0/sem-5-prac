/* AIM: To solve the 0/1 Knapsack Problem using Dynamic Programming and determine the maximum value of selected items without exceeding the given knapsack capacity. */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, W;

    cout << "Enter number of items: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of items." << endl;
        return 1;
    }

    vector<int> wt(n + 1), val(n + 1);

    cout << "Enter weights of items: ";
    for (int i = 1; i <= n; i++)
        cin >> wt[i];

    cout << "Enter values of items: ";
    for (int i = 1; i <= n; i++)
        cin >> val[i];

    cout << "Enter knapsack capacity: ";
    cin >> W;

    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    // Build the DP table.
    for (int i = 1; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (wt[i] > w)
                dp[i][w] = dp[i - 1][w];
            else
                dp[i][w] = max(dp[i - 1][w],
                               val[i] + dp[i - 1][w - wt[i]]);
        }
    }

    cout << "\nMaximum Value = " << dp[n][W] << endl;

    int w = W;
    vector<int> selected;

    for (int i = n; i >= 1; i--)
    {
        if (dp[i][w] != dp[i - 1][w])
        {
            selected.push_back(i);
            w -= wt[i];
        }
    }

    reverse(selected.begin(), selected.end());

    cout << "Selected items: ";
    if (selected.empty())
    {
        cout << "None";
    }
    else
    {
        for (int item : selected)
            cout << item << " ";
    }
    cout << endl;

    int totalWeight = 0;
    for (int item : selected)
        totalWeight += wt[item];

    cout << "Total Weight = " << totalWeight << endl;

    return 0;
}
