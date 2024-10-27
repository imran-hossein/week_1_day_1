#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        for (int i = 0;i < n;i++)
        {
            cin >> s[i];
        }

        int left = 0;
        int right = n - 1;
        for (int i = 0;i < n;i++)
        {
            if (s[left] == 'W')
            {
                left++;
            }
            if (s[right] == 'W')
            {
                right--;
            }
        }
        int result = (right - left) + 1;
        cout << result << endl;
    }
    return 0;
}