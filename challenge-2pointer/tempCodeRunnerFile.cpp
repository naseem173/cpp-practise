#include<iostream>
#include<vector>
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

    int top=0, bottom=m-1,left=0,right=m-1;
   
    while (top <= bottom ) {

            for (int i = top; i <= bottom; i++) {
                cout << a[i][right] << " ";
            }
            right--;
            cout << endl;       
    }
    return 0;
}