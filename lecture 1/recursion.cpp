#include<iostream>
#include<cstring>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }

    // int m=fact(n-1);
    // int k=n*m;
    // return k;
    return n*fact(n-1);
}

int sum(int n){
    if(n==0){
        return 0;
    }
    // int small=sum(n-1);
    // int ans=n+small;
    return n+sum(n-1);
}

int prime(int n){
    if(n==2){
        return true;
    }
    if(n%(n-1)!=0)
    return false;
    
}

int main(){

    int n,m;
    cin>>n;

    // cout<<fact(n)<<endl;
    // cout<<sum(m)<<endl;
    
    cout<<prime(n);
    return 0;
}