#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string input;
        cin >> input;
        stack<char> typed;
        for (char c : input)
        {
            if (c == 'b')
            {
                stack<char> temp;
                while (!typed.empty())
                {
                    if (islower(typed.top()))
                    {
                        typed.pop();
                        break;
                    }
                    temp.push(typed.top());
                    typed.pop();
                }
                while (!temp.empty())
                {
                    typed.push(temp.top());
                    temp.pop();
                }
            }
            else if (c == 'B')
            {
                stack<char> temp;
                while (!typed.empty())
                {
                    if (isupper(typed.top()))
                    {
                        typed.pop();
                    }
                    temp.push(typed.top());
                    typed.pop();
                }
                while (!temp.empty())
                {
                    typed.push(temp.top());
                    temp.pop();;
                }
            }
            else {
                typed.push(c);
            }
        }

        string result = "";
        while (!typed.empty())
        {
            char top = typed.top();
            result += top;
            typed.pop();

        }
        reverse(result.begin(), result.end());
        cout << result << endl;
    }
    return 0;
}