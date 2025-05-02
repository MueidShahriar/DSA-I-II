#include <bits/stdc++.h>
using namespace std;

struct Objects
{
    double wt, pt;
};

bool compare(Objects A, Objects B)
{
    return (A.pt / A.wt) > (B.pt / B.wt);
}

int main()
{
    int n;
    double c, maxProfit = 0;
    cout << "Number of items: ";
    cin >> n;
    cout << "Capacity: ";
    cin >> c; 
    Objects arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i].pt >> arr[i].wt;

    sort(arr, arr + n, compare);
    
    for (int i = 0; i < n && c > 0.0; i++)
    {
        double x = min(arr[i].wt, c);
        c -= x;                                     
        maxProfit += (x * (arr[i].pt / arr[i].wt));
    }
    cout << endl << "Max Profit: " << maxProfit << endl;
    return 0;
}