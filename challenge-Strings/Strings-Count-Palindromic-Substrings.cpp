#include<iostream>
using namespace std;

int countPalindromeSub(string str){
    int n = str.length();
    int count = 0;


    // for odd length
    for (int center = 0; center < n;center++){
        int left = center;
        int right = center;

        while(left>=0 && right <n && str[left]==str[right]){
            count++;
            left--;
            right++;
        }

    }
    return count;

    // if even length

    for (int center = 0; center < n;center++){
        int left = center;
        int right = center+1;

        while(left>=0 && right <n && str[left]==str[right]){
            count++;
            left--;
            right++;
        }

    }
    return count;
}

int main(){
    string s;
    cin >> s;
    int result = countPalindromeSub(s);
    cout << result << endl;

    return 0;
}