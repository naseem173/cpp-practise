#include<iostream>
#include<vector>
using namespace std;

int sumOfArray(int a[], int n){
    if(n==0){
        return 0;
    }
    return a[0]+sumOfArray(a+1,n-1);
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sumOfArray(a.data(),n);
}