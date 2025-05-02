#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.clear();
    v.push_back (16);
    v.push_back (18);
    v.push_back (20);
    v.push_back (22);
    v.push_back (24);
    v.push_back (28);
    v.push_back (30);
    v.push_back (40);
    v.push_back (50);
    v.push_back (60);

    for(auto i=0; i < v.size(); i++)
    cout << v[i] << " ";
    cout << endl;
    cout << "Front: "<< v.front() << endl;
    cout << "Back: "<< v.back() << endl;
    cout << "Size: "<< v.size() << endl;
    cout << "Max_Size: "<< v.max_size() << endl;
    cout << "Position: "<< v.at(4) << endl;
    cout << "Capacity: "<< v.capacity() << endl;
    
    v.pop_back();
    cout << "After pop back: ";
    for(auto i=0; i < v.size(); i++)
    cout << v[i] << " ";
    cout << endl;

    reverse(v.begin(), v.end());
    cout << "After reverse: ";
    for(auto i=0; i < v.size(); i++)
    cout << v[i] << " ";
    return 0;
} 