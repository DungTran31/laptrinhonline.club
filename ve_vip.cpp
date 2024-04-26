#include <iostream>
#include <map>
using namespace std;
map<int ,int> c;
int n, m, a,k;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        c[a]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> k;
        // it là pt đầu tiên có gtri lớn hơn k trong c
        auto it = c.upper_bound(k);
        if(it == c.begin()){
            cout<<-1<<endl;
        }else{
            //  Di chuyển con trỏ it đến phần tử trước đó trong c
            it--;
            cout<<it->first<<endl;
            it->second--;
            if(it->second==0){
                c.erase(it);
            }
        }
    }
}