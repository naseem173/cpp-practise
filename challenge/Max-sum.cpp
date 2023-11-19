#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Function to find the maximum subarray sum without circularity
int maxSubarraySum(vector<int>& a, int n) {
    int s = 0, ans = INT_MIN;

    for (int i = 0; i < n; i++) {
        s += a[i];
        ans = max(ans, s);

        if (s < 0) {
            s = 0;
        }
    }

    return ans;
}

// Function to find the maximum circular sum
int maxCircularSum(vector<int>& a, int n) {
    // Case 1: Maximum sum without circularity
    int maxSumWithoutCircularity = maxSubarraySum(a, n);

    // Case 2: Maximum sum with circularity
    int totalSum = 0;

    // Calculate total sum and invert array elements
    for (int i = 0; i < n; i++) {
        totalSum += a[i];
        a[i] = -a[i];
    }

    // Maximum sum with circularity is the total sum minus the minimum sum subarray of the inverted array
    int maxSumWithCircularity = totalSum + maxSubarraySum(a, n);

    // If all elements are negative, then the maximum circular sum is the same as the maximum sum without circularity
    if (maxSumWithCircularity == 0) {
        return maxSumWithoutCircularity;
    }

    return max(maxSumWithoutCircularity, maxSumWithCircularity);
}

int main() {
    int t, n;
    cin >> t;

    for (int z = 0; z < t; z++) {
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int result = maxCircularSum(a, n);
        cout << result << endl;
    }

    return 0;
}
