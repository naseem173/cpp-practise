#include<iostream>
using namespace std;

bool ratInMaze(char maze[][5], int i,int j,int n,int m, int sol[][10]){

    if (i == n - 1 and j == m - 1) {
    sol[i][j] = 1;

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return false;
}

sol[i][j] = 1;

if(j+1<m and maze[i][j+1] !='X'){
    bool right = ratInMaze(maze, i, j + 1, n, m, sol);
    if(right == true){
        return true;
    }
}

if(i+1<n and maze[i+1][j]!='X'){
    bool down = ratInMaze(maze, i + 1, j, n, m, sol);
    if(down==true){
        return true;
    }
}
sol[i][j] = 0;
return false;
}

int main(){

char maze[][5] = {
    "0000",
    "00XX",
    "0000",
    "XX00"
    };
int sol[10][10] = {0};

ratInMaze(maze, 0, 0, 4, 4, sol);

return 0;
}