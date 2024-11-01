#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin >> n;
    set<string> s;
    list<string> l;
    for (int i = 0;i < n;i++)
    {
        string name;
        cin >> name;
        if (s.find(name) != s.end())
        {
            l.remove(name);
        }
        else {
            s.insert(name);

        }
        l.push_front(name);
    }

    for (auto name : l)
    {
        cout << name << endl;
    }
    return 0;
}