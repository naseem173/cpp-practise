#include<iostream>
using namespace std;

bool isPalindrome(string str){
    int left = 0;
    int right = str.length() - 1;

    while(left<right){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}


int countPalindrome(string str){
    int count = 0;
    int n = str.length();

    for (int i = 0; i < n;i++){
        for (int j = i; j < (j - i + 1);j++){
            if(isPalindrome(str.substr(i,j-i+1))){
                count++;
            }
        }
    }
    return count;
}

int main(){
    string s;
    cin >> s;
    int result = countPalindrome(s);
    cout << result << endl;

    return 0;
}