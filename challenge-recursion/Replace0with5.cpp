#include<iostream>
using namespace std;

int replace(int n,int multiplier){
     
    if(n==0)   return 0;
    int digit = n % 10;
    int replaceDigit = (digit == 0) ? 5 : digit;
    return replace(n / 10, multiplier * 10) + replaceDigit * multiplier;
}

int main(){
    int n;
    cin >> n;
    int result = replace(n, 1);
    cout << result << endl;
    return 0;
}