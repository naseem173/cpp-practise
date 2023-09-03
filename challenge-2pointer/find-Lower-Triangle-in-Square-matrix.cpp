#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m;
    cin >> m;
    vector<vector<int>> a(m, vector<int>(m));

    bool doesIt = true;

        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
            for (int k = i+1; k < m;k++){

                if(a[i][k]!=0){
                    doesIt = false;
                    break;
                }
            }
            if(!doesIt){
                break;
            }
    }
    if(doesIt){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    


    return 0;
}