
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
typedef long long ll;

int main()
{
    int n, k;
    cin >> n >> k;
    queue<int> qu;
    for (int i = 1; i <= n; i++){
        qu.push(i);
    }
    while (qu.size() > 1){
        for (int i = 1; i < k; i++){
            qu.push(qu.front());
            qu.pop();
        }
        qu.pop();
    }
    cout << qu.front();

    return 0;
}
