#include<iostream>
#include<vector>
using namespace std;

void printPaths(vector<string> &paths, string &path, int row , int col, int n, int m){
    if(row == n-1 && col == m-1){
        paths.push_back(path);
        return;
    }
    if(row <n-1){
        path+='V';
        printPaths(paths, path, row + 1, col, n, m);
        path.pop_back();
    }
     if(col <m-1){
        path+='H';
        printPaths(paths, path, row , col+1, n, m);
        path.pop_back();
    }

     if(row <n-1 && col<m-1){
        path+='D';
        printPaths(paths, path, row + 1, col+1, n, m);
        path.pop_back();
    }
}

int countAndPrintPaths(int n,int m){
    vector<string> paths;
    string path = "";

    printPaths(paths, path, 0, 0, n, m);

    for( const string& p : paths)
        cout << p << " ";

    return paths.size();
    
}

int main(){
    int N1, N2;
    cin >> N1 >> N2;

    int totalPaths = countAndPrintPaths(N1, N2);
    cout << endl<< totalPaths;

    return 0;
}