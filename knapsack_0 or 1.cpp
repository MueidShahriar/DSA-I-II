#include <bits/stdc++.h>
using namespace std;

int knapsack(int m, int n, int p[], int wt[], int selected_items[], int &item_count)
{
    int k[n+1][m+1];
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= m; w++)
        {
            if (i == 0 || w == 0)
            {
                k[i][w] = 0;
            }
            else if (wt[i - 1] <= w)
            {
                k[i][w] = max(k[i-1][w], p[i-1] + k[i-1][w-wt[i-1]]);
            }
            else
            {
                k[i][w] = k[i-1][w];
            }
        }
    }

    int w = m;
    item_count = 0; 
    for (int i = n; i > 0 && w > 0; i--)
    {
        if (k[i][w] != k[i-1][w])
        {
            selected_items[item_count++] = i;
            w -= wt[i-1];
        }
    }
    return k[n][m];
}

int main()
{
    int n, capacity; 
    cout << "Number of items: "; cin >> n;
    cout << "Capacity: "; cin >> capacity;
    
    int profit[n], weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i] >> weight[i];
    }

    int selected_items[n], item_count = 0;  
    int max_profit = knapsack(capacity, n, profit, weight, selected_items, item_count);
    
    cout << "Selected items: ";
    for (int i = item_count - 1; i >= 0; i--)
    {
        cout << selected_items[i] << " ";
    }
    cout << endl;
    cout << "Max profit: " << max_profit << endl;
    return 0;
}
