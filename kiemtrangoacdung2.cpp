#include <iostream>
#include <stack>
using namespace std;

void kt()
{
    string a;
    cin >> a;
    stack<char> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '{')
        {
            if (!b.empty())
            {
                char c = b.top();
                if (c == '[' || c == '(')
                {
                    cout << "Sai" << endl;
                    return;
                }
            }
            b.push(a[i]);
        }
        if (a[i] == '[')
        {
            if (!b.empty())
            {
                char c = b.top();
                if (c == '(')
                {
                    cout << "Sai" << endl;
                    return;
                }
            }
            b.push(a[i]);
        }
        if (a[i] == '(')
        {
            b.push(a[i]);
        }
        if (a[i] == ')')
        {
            if (!b.empty())
            {
                if (b.top() != '(')
                {
                    cout << "Sai" << endl;
                    return;
                }
                b.pop();
            }
            else
            {
                cout << "Sai" << endl;
                return;
            }
        }
        if (a[i] == ']')
        {
            if (!b.empty())
            {
                if (b.top() != '[')
                {
                    cout << "Sai" << endl;
                    return;
                }
                b.pop();
            }
            else
            {
                cout << "Sai" << endl;
                return;
            }
        }
        if (!b.empty() && a[i] == '}')
        {
            if (!b.empty())
            {
                if (b.top() != '{')
                {
                    cout << "Sai" << endl;
                    return;
                }
                b.pop();
            }
            else
            {
                cout << "Sai" << endl;
                return;
            }
        }
    }
    if (b.empty())
    {
        cout << "Dung" << endl;
        return;
    }
    cout << "Sai" << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        kt();
    }
}