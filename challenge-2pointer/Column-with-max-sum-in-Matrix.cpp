#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int m;
    cin >> m;
    vector<vector<int> >a (m,vector<int>(m));

    for (int i = 0; i < m; i++) {
        
        for (int j = 0; j < m; j++)
        {
           cin >> a[i][j];
        }
    }

    int maxSum = INT_MIN;
    int col = 1;

    for (int i = 0; i < m; i++)
    {
        int sum = 0;

        for (int j = 0; j < m; j++)
        {
            sum += a[j][i];
        }
        if(maxSum<sum){
            maxSum = sum;
            col = i + 1;
        }
    }

    cout<<col<<" "<<maxSum<<endl;


    return 0;
}