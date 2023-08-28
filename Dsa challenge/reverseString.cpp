#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    string n = " ";
    for (int i = 0; i < s.length(); i++){
           if(s[i]==' '){
            reverse(s.begin(), s.end());
           }
    }
        
        reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}