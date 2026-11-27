/* AIM: To find and display all subsets of a given set of distinct positive integers whose sum is equal to a specified target value using the Backtracking method. */

#include <iostream>
#include <vector>
using namespace std;

void sumOfSubsets(const vector<int> &arr, int index,
                  int target, int currentSum,
                  vector<int> &subset)
{
    if (currentSum == target)
    {
        cout << "{ ";
        for (int i = 0; i < (int)subset.size(); i++)
        {
            cout << subset[i];
            if (i + 1 < (int)subset.size())
                cout << ", ";
        }
        cout << " }" << endl;
        return;
    }

    // All input values are positive, so this branch can be pruned.
    if (index == (int)arr.size() || currentSum > target)
        return;

    // Include the current element.
    subset.push_back(arr[index]);
    sumOfSubsets(arr, index + 1, target,
                 currentSum + arr[index], subset);

    // Exclude the current element.
    subset.pop_back();
    sumOfSubsets(arr, index + 1, target,
                 currentSum, subset);
}

int main()
{
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of elements." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 0)
        {
            cout << "Enter positive integers only." << endl;
            return 1;
        }
    }

    cout << "Enter target sum: ";
    cin >> target;

    vector<int> subset;
    cout << "\nSubsets with sum = " << target << " are:\n";
    sumOfSubsets(arr, 0, target, 0, subset);

    return 0;
}
