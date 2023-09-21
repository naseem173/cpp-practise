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
    int si, sj;
    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
    }

    int maxSum = INT_MIN;

    vector<int> ps(n);
    ps[0]=a[0];

    for (int i = 0; i < n; i++)
    {
       ps[i] = ps[i-1]+a[i];
    }

    for(int i = 0; i < n; i++){
        for (int j = i; j < n; j++)
        {
            int ans = ps[j] - ((i - 1 < 0) ? 0 : ps[i - 1]);

            //maxSum = max(maxSum, ans);
            if(maxSum <ans){
                maxSum = ans;
                si = i;
                sj = j;
            }
        }
    }
    for (int i = si; i <= sj; i++)
    {
        cout << a[i] << " ";
    }

    cout<<"Max Sum "<<maxSum<<endl;

    return 0;
}