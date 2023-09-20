#include<iostream>
#include<vector>
using namespace std;


void printSubset(vector<int> &subset){
    for (int i = 0; i < subset.size(); i++)
    {
       if(i>0)
        cout << " ";
        cout << subset[i];
          
    }
    cout << "  ";
}

int countSubset(vector<int> &a, int sum, int i, vector<int> &subset){
    
    //base cases
    if(sum == 0){
        printSubset(subset);
        return 1;
    }
    
    if(i == a.size()){
        return 0;
    }
    int count = 0;

     //count or include
    subset.push_back(a[i]);
    count += countSubset(a, sum - a[i], i+1, subset);

    //exclude or don't count
    subset.pop_back();
    count += countSubset(a, sum, i+1, subset);
    
    return count;
}

int TotalSubset(vector<int> &a,int sum, int i){
    if(sum == 0){
        return 1;
        
    }
    if(sum <0){
        return 0;
    }
    if(i == a.size()){
        return 0;
    }
    return TotalSubset(a, sum - a[i], i + 1) + TotalSubset(a, sum, i + 1);
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
     int total = TotalSubset(a, t, 0);
     countSubset(a, t, 0, subset);
     cout << endl;
     cout << total << endl;

     return 0;
}