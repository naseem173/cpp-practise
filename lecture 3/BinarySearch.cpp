#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int a[], int s, int e, int key)
{
    // base case
    if (s > e)
    {
        return -1;
    }

    // recursive case
    int m = (s + e) / 2;

    if (a[m] == key)
    {
        return m;
    }
    else if (a[m] < key)
    {
        return binarySearch(a, m + 1, e, key);
    }
    else
    {
        return binarySearch(a, s, m - 1, key);
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int t;
    cin >> t;

    cout << binarySearch(a.data(), 0, n - 1, t) << endl;

    return 0;
}