#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    // string s ="Hello";
    // s="World";
    // cout<<s<<endl;
    // cout<<s.size()<<endl;
    // //concatinate
    //  s.push_back('w');
    // cout<<"Hello "+s+" !"<<endl;
   
    // //insertion
    // string z;
    // getline(cin, z ,'@');
    // cout<<z<<endl;
    //array of string
    string a[5];
    int n=5;
    
    a[0]="What";
    a[1]="are";
    a[2]="you";
    a[3]="doing?";
    a[4]="So late";
    sort(a,a+n);
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
   
    return 0;
}