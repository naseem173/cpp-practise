#include<iostream>
using namespace std;

int **createArray(int n,int m){
    int **x = new int*[n];
    for (int i = 0; i < n; i++)
    {
         x[i] = new int[m];
        for (int j = 0; j < m; j++){
             x[i][j] = i*m +j+ 1;
        }
           
    }
    return x;
}

int main(){
    int n,m;
    cin >> n>>m;

    int **a = createArray(n,m);
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
             cout << a[i][j]<< " ";
        }
        cout << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     delete[]a[i];
    // }
    // delete[] a;

    return 0;
}