#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cout << "Number of strings: ";
    cin >> n;

    set<string> Set;
    string s;

    for (int i = 0; i < n; i++) 
    {
        cin >> s;
        Set.insert(s); 
    }
    
    cout << "Elements in set: ";
    for (auto x : Set) 
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Size of set: " << Set.size() << endl;

    Set.clear();
    if (Set.empty()) 
    {
        cout << "Set is empty" << endl;
    } 
    else 
    {
        cout << "Set is not empty" << endl;
    }
    return 0;
}
