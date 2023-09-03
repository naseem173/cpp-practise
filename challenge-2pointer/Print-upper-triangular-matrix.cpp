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
for (int i = 0; i < m; i++) {
        
        for (int j = 0; j < m; j++)
        {
            if(i>j){
                cout << "0" << " ";
            }
            else{
           cout<< a[i][j]<<" ";
        }
        }
        cout<<endl;
    }


    return 0;
}