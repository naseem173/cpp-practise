#include <iostream>
using namespace std;

int nthTriangle(int n){
   if(n==0) return 0;

   return n+ nthTriangle(n-1);
}

int main(){
    int n;
    cin>>n;
    int result = nthTriangle(n);
    cout<<result<<endl;

    return 0;
}