#include<bits/stdc++.h>
using namespace std;

#define INF 1e18 // set a very large number as the initial minimum length
#define int long long

int n, s, a[100005], ans = INF;

signed main() 
{
    cin >> n >> s;
    // Insert Array
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    
    int sum = 0, left = 1; // initialize the sum and left index

    for (int i = 1; i <= n; i++) 
    {
        sum += a[i]; // add the current element to the sum

        // if the sum is greater than or equal to s, but removing the leftmost element would make it less than s, move the left index to the right
        while (sum - a[left] >= s) 
        { 
            sum -= a[left];
            left++;
        }
        // if the sum is greater than or equal to s, update the minimum length
        if (sum >= s) 
            ans = min(ans, i - left + 1);
    }


    // if no good segment is found, print -1
    if (ans == INF)  
        cout << -1 << endl; 
    else 
        cout << ans << endl;
}