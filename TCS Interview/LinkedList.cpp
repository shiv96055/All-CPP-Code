#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{

    if (num == 1)
        return false;

    for (int i = 2; i < num; i++)
    {
        if ((num % i) == 0)
            return false;
    }

    return true;
}
int solve(int x, int y)
{

    int sum = 0;

    for (int i = x; i <= y; i++)
    {
        if (isPrime(i))
        {
            sum = sum + i;
        }
    }

    return sum;
}
int main()
{

    int x, y;
    cin >> x >> y;
    int ans = solve(x, y);
    cout << ans << endl;
}