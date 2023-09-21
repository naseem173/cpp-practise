#include<iostream>
#include<climits>
#include<vector>
using namespace std;

// TIME complexity is O(n^3) which is bad
// The improved version is in next file

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
    }
    

    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++){
        for (int j = i; j < n; j++)
        {
            int ans = 0;
            for (int k = i; k <= j; k++)
            {
                ans += a[k];
            }
            maxSum = max(maxSum, ans);
        }
    }
    cout<<maxSum<<endl;

    return 0;
}