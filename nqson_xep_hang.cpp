#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<long long> sk1, sk2;
    long long a[n];
    long long res[n] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        while (!sk2.empty() && sk2.top() < a[i])
        {
            int index = sk1.top();
            sk1.pop();
            int value = sk2.top();
            sk2.pop();
            res[index] = a[i];
        }
        sk1.push(i);
        sk2.push(a[i]);
    }
    while (!sk1.empty())
    {
        int index = sk1.top();
        sk1.pop();
        int value = sk2.top();
        sk2.pop();
        res[index] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
}