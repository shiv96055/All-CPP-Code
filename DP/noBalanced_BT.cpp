#include <bits/stdc++.h>

using namespace std;

int balancedBTs(int h)
{

    if (h <= 1)
    {
        return 1;
    }
    int mod = (int)(pow(10, 9)) + 7;
    int x = balancedBTs(h - 1);
    int y = balancedBTs(h - 2);

    int temp1 = (int)(((long)(x)*x) % mod);

    int temp2 = (int)((2 * (long)(x)*y) % mod);

    int ans = (temp1 + temp2) % mod;
    return ans;
}

int balancedBTs_Helper(int h, vector<int> &ans)
{

    if (h <= 1)
        return 1;

    if (ans[h] != -1)
        return ans[h];

    int mod = (int)(pow(10, 9)) + 7;
    int x = balancedBTs_Helper(h - 1, ans);
    int y = balancedBTs_Helper(h - 2, ans);

    int temp1 = (int)(((long)(x)*x) % mod);

    int temp2 = (int)((2 * (long)(x)*y) % mod);

    int output = (temp1 + temp2) % mod;

    ans[h] = output;

    return ans[h];
}

int balancedBTs_2(int h)
{

    vector<int> ans(h + 1, -1);

    return balancedBTs_Helper(h, ans);
}
int main()
{

    int h;
    cin >> h;

    // by recursion
    int ans = balancedBTs(h);
    cout << ans << endl;

    // by using memoization

    int ans1 = balancedBTs_2(h);
    cout << ans1 << endl;
    return 0;
}