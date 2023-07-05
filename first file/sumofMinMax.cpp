#include <iostream>
using namespace std;
int main()
{
    int getmaximum(int arr[], int n);

    int getminimum(int arr[], int n);
    int arr[] = {1, 2, 5, 8, 4, 9};
    int max = getmaximum(arr, 6);
    int min = getminimum(arr, 6);
    int ans = max + min;

    cout << ans;
}

int getmaximum(int *arr, int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}

int getminimum(int *arr, int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (mini > arr[i])
        {
            mini = arr[i];
        }
    }
    return mini;
}
