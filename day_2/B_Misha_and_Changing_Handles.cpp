#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, string> username, newUsername;

    for (int i = 0;i < n;i++)
    {
        string a, b;
        cin >> a >> b;
        if (newUsername.find(a) != newUsername.end())
        {
            string oldName = newUsername[a];
            username[oldName] = b;
            newUsername.erase(a);
            newUsername[b] = oldName;
        }
        else {
            username[a] = b;
            newUsername[b] = a;
        }
    }
    cout << username.size() << endl;
    for (auto [x, y] : username)
    {
        cout << x << " " << y << endl;
    }
    return 0;
}