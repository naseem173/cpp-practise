#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){

    int t;
    cin >> t;
    int ans;
    while (t--)

    {

        int n;
        cin >> n;
        vector<int> a(n);
        string result;

        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        
        for (int i = 0; i < n; i++)
        {
            result += to_string(a[i]);
        }

    cout << result << endl;

    return 0;
}
}