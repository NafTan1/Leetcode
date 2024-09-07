/*Given an array,
find the single element of that array.
All elements will be present for two times without
one element. Obviously you can't use
any extra space without a variable.
you need to solve it using O(n);*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans << endl;
    return 0;
}
