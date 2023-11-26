#include<bits/stdc++.h>
using namespace std;

//using struct

struct Pair
{
    int min;
    int max;
};

Pair getMinMax(int a[], int n){
    Pair x;

    sort(a, a + n);
    x.min = a[0];
    x.max = a[n - 1];

    return x;
}

int main(){

    int a[] = {12, 103, 144, 125, 106, 147};
    int aSize = sizeof(a)/sizeof(a[0]);
    Pair x = getMinMax(a, aSize);

    cout<<"Minimum = "<<x.min<<endl;
    cout<<"Maximum = "<<x.max<<endl;

    return 0;
    
}