#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout << "String number: ";
    cin >> n;

    vector <string> s(n);
    map <string, int> f;

    cout << "Enter string:" << endl;
    for (auto i = 0; i < n; i++) 
    {
        cin >> s[i];
        f[s[i]]++;
    }

    vector<string> x;
    for (const auto& pair : f) 
    {
        x.push_back(pair.first);
    }

    sort(x.begin(), x.end());

    for (const string& s : x) 
    {
        cout << s << " " << f[s] << endl;
    }
    return 0;
}