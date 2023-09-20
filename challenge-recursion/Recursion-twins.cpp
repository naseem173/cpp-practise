#include<iostream>
#include<string>
using namespace std;

int countTwins(const string &s, int i){

    //base case

    if(i >= s.length() -2){
        return 0;
    }

    //checking twin case

    if(s[i]== s[i+2])
        return 1 + countTwins(s, i + 1);
    
    else
        return countTwins(s, i + 1);
}

int main(){
    string s;
    cin>>s;

    int totalTwins = countTwins(s,0);
    cout<<totalTwins<<endl;

    return 0;
}