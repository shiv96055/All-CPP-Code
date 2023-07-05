#include <iostream>
using namespace std;
int main()
{
    int repElement(int arrr[], int size);
    int arr[6] = {4, 6, 3, 9, 9, 2};
    int ans;
    ans = repElement(arr, 6);
    if (ans < 6)
    {
        cout << ans;
    }
    else
    {
        cout << " not repeat element there ";
    }
}
int repElement(int *arr, int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int ptr = arr[i] ^ arr[j];
            if (ptr == 0)
                return i;
        }
    }
    return size;
}
