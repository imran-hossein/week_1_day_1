#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> dataBase;

    for (int i = 0;i < n;i++)
    {
        string s;
        cin >> s;

        if (dataBase.find(s) == dataBase.end())
        {
            dataBase[s] = 0;
            cout << "OK" << endl;
        }
        else {
            dataBase[s]++;
            string newStr = s + to_string(dataBase[s]);
            cout << newStr << endl;
            dataBase[newStr] = 0;
        }
    }

    return 0;
}