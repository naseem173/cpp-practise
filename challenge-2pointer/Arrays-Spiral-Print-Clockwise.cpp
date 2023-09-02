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
    bool isMovingDown = false;
    bool isMovingRight = true;
    bool isMovingUp = false;
    bool isMovingLeft = false;

    
    while (top <= bottom && left <= right) {
         if(isMovingRight) {
            for (int i = left; i <= right; i++) {
                cout << a[top][i] << ", ";
            }
            top++;
            isMovingRight = false;
            isMovingDown = true;
        }

        if (isMovingDown) {
            for (int i = top; i <= bottom; i++) {
                cout << a[i][right] << ", ";
            }
            right--;
            isMovingDown = false;
            isMovingLeft = true;
        }
       

        if(isMovingUp) {
            for (int i = bottom; i >= top; i--) {
                cout << a[i][left] << ", ";
            }
            left++;
            isMovingUp = false;
            isMovingRight = true;
        }

        if (isMovingLeft) {
            for (int i = right; i >= left; i--) {
                cout << a[bottom][i] << ", ";
            }
            bottom--;
            isMovingLeft = false;
            isMovingUp = true;
        }
    }
    cout << " END" << endl;

    //11, 12, 13, 14,
    //24, 34, 44, 43,
    // 42, 41, 31, 21,
    //  22, 23, 33, 32, END

    return 0;
}