#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    string s, v;
    map <string, int> m;

    for (int i = 0; i < n; i++) 
    {
        cin >> s;
        m[s]++;
    }

    cout << "\nMap content: \n";
    for (auto x : m)
    {
        cout << x.first << ": " << x.second << endl;
    }
    cout << "\nEnter a string to erase: ";
    cin >> v;
    m.erase(v);
    for (auto x : m) 
    {
        cout << x.first << ": " << x.second << endl;
    }
    cout << endl;
    m.clear();
    if (m.empty())
        cout << "Map is empty.";
    else
        cout << "Map is not empty.";
    return 0;
}
