#include<iostream>
#include<climits>
#include<vector>
using namespace std;



void magicSwap(int n){
    int lar = INT_MIN;

    vector<int> a;
    int i = 0;

    while(n!=0){

        int d = n % 10;
        a.push_back(d);
        i++;
        if (d > lar)
        {
            lar = d;
        }
        n /= 10;

    }
    int m = i;

    for (int j = 0; j <m;j++){
       if(lar==a[j]){
            swap(a[j], a[m-1]);
       }
    }
    int ans=0;
    for (int k = m - 1; k >= 0; k--)
    {
       ans =ans* 10 + a[k];
    }
    cout << ans << endl;
}

int main(){

    int n;
    cin >> n;
    magicSwap(n);
    return 0;
}