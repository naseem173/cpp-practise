#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int> >a (m,vector<int>(n));

    for (int i = 0; i < m; i++) {
        
        for (int j = 0; j < n; j++)
        {
           cin >> a[i][j];
        }
    }

    int top=0, bottom=m-1,left=0,right=n-1;
    bool isMovingDown = true;
    bool isMovingRight = false;
    bool isMovingUp = false;
    bool isMovingLeft = false;

    
    while (top <= bottom && left <= right) {
        if (isMovingDown) {
            for (int i = top; i <= bottom; i++) {
                cout << a[i][left] << ", ";
            }
            left++;
            isMovingDown = false;
            isMovingRight = true;
        }
        if(isMovingRight) {
            for (int i = left; i <= right; i++) {
                cout << a[bottom][i] << ", ";
            }
            bottom--;
            isMovingRight = false;
            isMovingUp = true;
        }

        if(isMovingUp) {
            for (int i = bottom; i >= top; i--) {
                cout << a[i][right] << ", ";
            }
            right--;
            isMovingUp = false;
            isMovingLeft = true;
        }

        if (isMovingLeft) {
            for (int i = right; i >= left; i--) {
                cout << a[top][i] << ", ";
            }
            top++;
            isMovingLeft = false;
            isMovingDown = true;
        }
    }
    cout << "END" << endl;

    return 0;
}