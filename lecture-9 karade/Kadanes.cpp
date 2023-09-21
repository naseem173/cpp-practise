#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int s = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        s += a[i];
        if(s<0){
            s = 0;
        }
        ans = max(ans, s);
    }
    cout<< ans<< endl;

    return 0;
}
