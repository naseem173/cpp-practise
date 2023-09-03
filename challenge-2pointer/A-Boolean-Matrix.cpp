#include<iostream>
#include<vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));

    // Read the input matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    vector<bool> row_marked(m, false);
    vector<bool> col_marked(n, false);


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                row_marked[i] = true;
                col_marked[j] = true;
            }
        }
    }

  
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (row_marked[i] || col_marked[j]) {
                mat[i][j] = 1;
            }
        }
    }

   
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
