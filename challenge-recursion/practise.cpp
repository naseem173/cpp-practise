#include<iostream>
using   namespace std;

// void fun1(int n){
//     if(n==0) return; 

//     cout << "Mohd Naseemuddin" << endl;
//     fun1(n-1);
// }

int main() {

    int n = 103;
    cout<<n%10<<endl;
    n/=10;
    cout<<n%10<<endl;
    n/=10;
    cout<<n%10<<endl;


    return 0;
}