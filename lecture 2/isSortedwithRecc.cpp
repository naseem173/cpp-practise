#include<iostream>
#include<vector>
using namespace std;

bool sortedArray(int a[],int n){
    if(n==1||n==0){
    return true;
    }
    bool Sorted= sortedArray(a+1,n-1);
    if(a[0]<=a[1] and Sorted== true){
        return true;
    }
return false;
}

bool sortedArray2(int a[], int n){

    if(n<=1){
        return true;
    }
    bool isSorted= sortedArray2(a,n-1);
    if (a[n-1]>=a[n-2] and isSorted==true){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sortedArray2(a.data(),n);
    return 0;
}