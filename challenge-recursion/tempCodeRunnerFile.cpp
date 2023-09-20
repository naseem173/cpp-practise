#include<iostream>
#include<vector>
using namespace std;


void printSubset(vector<int> &subset){
    for (int i = 0; i < subset.size(); i++)
    {
       if(i>0)
        cout << subset[i];
           cout << " ";
    }
    cout << "  ";
}

void countSubset(vector<int> &a, int sum, int i, vector<int> &subset){
    
    //base cases
    if(sum == 0){
        printSubset(subset);
        return;
    }
    
    if(i == a.size()){
        return;
    }

     //count or include
    subset.push_back(a[i]);
    countSubset(a, sum - a[i], i+1, subset);

    //exclude or don't count
    subset.pop_back();
    countSubset(a, sum, i+1, subset);

    
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int t;
    cin >> t;
    vector<int> subset;
     countSubset(a, t, 0,subset);
    

        return 0;
}