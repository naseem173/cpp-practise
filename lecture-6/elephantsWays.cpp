#include<iostream>
using namespace std;

int elephantWays(int i, int j){
    if(i==0 and j==0){
        return 1;
    }
    if(i<0||j<0){
        return 0;
    }

    int ans = 0;

    for (int k = 0; k < i; k++){
        ans += elephantWays(k, j);
    }

    for (int k = 0; k < j; k++){
        ans += elephantWays(i, k);
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << elephantWays(n, m)<<" ways!"<<endl;

    return 0;
}