#include <iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        cin >> n;
    } while (1000 > n || n > 1000000000);
    int soto = 0;
    int menhgia[9] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    if (n % 1000 == 0)
    {
        for (int i = 0; i < 9; i++)
        {

            while (menhgia[i] <= n)
            {
                n -= menhgia[i];
                soto++;
            }
        }
        cout << soto;
    }
    else
    {
        cout << -1;
    }
}