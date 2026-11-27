/* AIM: To construct an Optimal Binary Search Tree (OBST) for a sorted set of keys using Dynamic Programming, minimize the expected search cost based on the given frequencies, and search for a specified key in the constructed tree. */

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int value) : key(value), left(nullptr), right(nullptr) {}
};

Node *buildTree(const vector<int> &keys,
                const vector<vector<int>> &root,
                int i, int j)
{
    if (i > j)
        return nullptr;

    int r = root[i][j];
    Node *node = new Node(keys[r]);
    node->left = buildTree(keys, root, i, r - 1);
    node->right = buildTree(keys, root, r + 1, j);
    return node;
}

bool searchTree(Node *node, int key, int &comparisons)
{
    if (node == nullptr)
        return false;

    comparisons++;
    cout << "Compare with " << node->key << endl;

    if (key == node->key)
        return true;
    if (key < node->key)
        return searchTree(node->left, key, comparisons);
    return searchTree(node->right, key, comparisons);
}

void deleteTree(Node *node)
{
    if (node == nullptr)
        return;
    deleteTree(node->left);
    deleteTree(node->right);
    delete node;
}

int main()
{
    int n;
    cout << "Enter number of keys: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of keys." << endl;
        return 1;
    }

    vector<int> keys(n), freq(n);
    cout << "Enter sorted keys: ";
    for (int i = 0; i < n; i++)
        cin >> keys[i];

    cout << "Enter frequencies: ";
    for (int i = 0; i < n; i++)
    {
        cin >> freq[i];
        if (freq[i] < 0)
        {
            cout << "Frequencies must be non-negative." << endl;
            return 1;
        }
    }

    // dp[i][j] stores minimum cost for keys i through j.
    // root[i][j] stores the index of the optimal root.
    vector<vector<int>> dp(n, vector<int>(n, 0));
    vector<vector<int>> root(n, vector<int>(n, -1));
    vector<int> prefix(n + 1, 0);

    for (int i = 0; i < n; i++)
        prefix[i + 1] = prefix[i] + freq[i];

    for (int i = 0; i < n; i++)
    {
        dp[i][i] = freq[i];
        root[i][i] = i;
    }

    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            int sumFreq = prefix[j + 1] - prefix[i];
            dp[i][j] = INT_MAX;

            for (int r = i; r <= j; r++)
            {
                int leftCost = (r > i) ? dp[i][r - 1] : 0;
                int rightCost = (r < j) ? dp[r + 1][j] : 0;
                int cost = leftCost + rightCost + sumFreq;

                if (cost < dp[i][j])
                {
                    dp[i][j] = cost;
                    root[i][j] = r;
                }
            }
        }
    }

    cout << "\nMinimum Expected Search Cost = " << dp[0][n - 1] << endl;

    Node *tree = buildTree(keys, root, 0, n - 1);
    int target, comparisons = 0;
    cout << "\nEnter element to search: ";
    cin >> target;

    cout << endl;
    if (searchTree(tree, target, comparisons))
        cout << "Element found in OBST." << endl;
    else
        cout << "Element not found in OBST." << endl;

    cout << "Number of comparisons = " << comparisons << endl;
    deleteTree(tree);
    return 0;
}
