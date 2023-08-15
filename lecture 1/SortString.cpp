#include<iostream>
#include<algorithm>
using namespace std;

bool cp(string &x, string &y){
    return x.size()<y.size();
}


int main(){
    
    string a[]={"axe","what","do","it","uid","adhaar"};
    int n=a->size();
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    sort(a,a+n,cp);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}