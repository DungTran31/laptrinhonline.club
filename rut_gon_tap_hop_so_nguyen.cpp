#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] != 0)
        {                        // b1:kiem tra a[i] da xuat hien chua neu chua se xuat con da in ra thi ko xuat lai
            printf("%d ", a[i]); // b2:in ra ptu a[i] giua vào tân suat xh cua map a[i]
            mp[a[i]] = 0;        // khi a[i] da xuat thi tan suat map cua a[i] se cho =0 và quay lai b1
        }
    }
}