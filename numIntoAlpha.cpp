#include<iostream>
using namespace std;

void numToStr(int n,string a[]){
    if(n==0){
        return;
    }
    int ld=n%10;
    numToStr(n/10);
    cout<<a[ld]<<" ";
}

int main(){
    string a[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cin>>n;
    numToStr(n,a[]);
    return 0;
}