#include <bits/stdc++.h>

using namespace std;

int stairCase(int n)
{

    if (n <= 0)
        return 1;

    int x = stairCase(n - 1);

    int y = 0, z = 0;
    if (n - 2 >= 0)
        y = stairCase(n - 2);
    if (n - 3 >= 0)
        z = stairCase(n - 3);

    return x + y + z;
}

int stairCaseHelper(int n, int *arr)
{

    for (int i = 1; i <= n; i++)
    {
        int x = 0, y = 0, z = 0;
        if (i - 1 >= 0)
            x = arr[i - 1];

        if (i - 2 >= 0)
            y = arr[i - 2];

        if (i - 3 >= 0)
            z = arr[i - 3];

        arr[i] = x + y + z;
    }

    return arr[n];
}
int stairCase_2(int n)
{

    int *arr = new int[n + 1];
    arr[0] = 1;

    return stairCaseHelper(n, arr);
}

int stairCaseHelper_2(int n, int *ans)
{

    if (n <= 0)
    {
        return 1;
    }

    if (ans[n] != -1)
    {
        return ans[n];
    }

    int x = stairCaseHelper_2(n - 1, ans);
    int y = 0, z = 0;

    if (n - 2 >= 0)
        y = stairCaseHelper_2(n - 2, ans);

    if (n - 3 >= 0)
        z = stairCaseHelper_2(n - 3, ans);

    int output = x + y + z;
    ans[n] = output;
    return ans[n];
}

int stairCase_3(int n)
{

    int *arr = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = -1;
    }

    return stairCaseHelper_2(n, arr);
}
int main()
{

    int n;
    cin >> n;

    // by recurssion
    int ans = stairCase(n);
    cout << ans << endl;

    // by dyanamic programming

    int ans1 = stairCase_2(n);
    cout << ans1 << endl;

    // using memoization -> top down approach

    int ans2 = stairCase_3(n);
    cout << ans << endl;
    return 0;
}