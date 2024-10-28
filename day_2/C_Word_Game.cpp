#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n, m = 3;
        cin >> n;
        map<string, vector<int>>mp;
        for (int i = 1;i <= m;i++)
        {
            for (int j = 0;j < n;j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        vector<int> result(m + 1);
        for (auto [x, y] : mp)
        {
            vector<int> v = y;
            if (v.size() == 1)
            {
                result[v[0]] += 3;
            }
            if (v.size() == 2)
            {
                result[v[0]]++;
                result[v[1]]++;
            }
        }
        for (int i = 1;i <= m;i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;

    }
    return 0;
}