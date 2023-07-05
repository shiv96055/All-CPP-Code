#include<iostream>

using namespace std;

    int fun(int n){
        if (n <= 1){
            return n;
        }

        int sum1 = fun(n - 1);
        int sum2 =  fun(n - 2);

        return sum1 + sum2;
    }

int main() {

    int n = 4;

    int ans = fun(n);
    cout << ans << endl;
    return 0;
}