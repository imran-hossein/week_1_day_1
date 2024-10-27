#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0;i < n;i++)
    {
        cin >> cards[i];
    }

    int left = 0;
    int right = n - 1;
    int sereja_score = 0;
    int dima_score = 0;
    bool s_turn = true;

    while (left <= right)
    {
        if (cards[left] > cards[right])
        {
            if (s_turn)
            {
                sereja_score += cards[left];
            }
            else {
                dima_score += cards[left];
            }
            left++;
        }
        else {
            if (s_turn)
            {
                sereja_score += cards[right];
            }
            else {
                dima_score += cards[right];
            }
            right--;
        }
        s_turn = !s_turn;
    }

    cout << sereja_score << " " << dima_score << endl;

    return 0;
}