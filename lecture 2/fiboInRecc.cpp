#include<iostream>
using namespace std;

long long int fibo(int n){
    if(n==0|| n==1){
        return n; 
    }
    return fibo(n-1)+ fibo(n-2);
}

int main(){

    long long n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}