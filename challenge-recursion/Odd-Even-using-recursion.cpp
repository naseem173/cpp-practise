#include <iostream>
using namespace std;

void odd(int n){
    if(n==0) return;

    if(n%2!=0){
    cout<<n<<endl;
}
    odd(n-1);
    }

void even(int n,int i){
    

    if(i==n+1) return;

    if(i%2==0){
    cout<<i<<endl;
    }
    even(n,i+1);


    }


int main(){

    int n;
    cin >> n;
    int i = 1;
    odd(n);
    even(n,i);

    return 0;
}