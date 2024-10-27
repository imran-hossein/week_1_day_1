#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    set<string> s;
    for (int i = 0;i < n;i++)
    {
        string leaf;
        getline(cin, leaf);
        s.insert(leaf);
    }

    cout << s.size() << endl;

    return 0;
}