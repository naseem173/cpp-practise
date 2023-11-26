#include<bits/stdc++.h>
using namespace std;

void KthSmall(int a[],int n, int k){
    sort(a, a + n);
    cout<<a[k - 1]<<endl;
    
}

int main(){

    int arr[] = {29, 14, 3, 34, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;
    KthSmall(arr, n, k);
    return 0;
}