#include<bits/stdc++.h>
using namespace std;

Sort(vector<int> a){
    for (int i = 0; i < n;i++){
        if(a[i]==0){
            swap(a[i],a[0]);
        }
        if(a[i]==2){
            swap(a[i],a[n-1]);
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0;i<n;i++){
        cin>>a[i];
    }

        return 0;

}