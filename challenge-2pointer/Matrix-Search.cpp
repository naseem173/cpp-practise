#include<iostream>
#include<vector>
using namespace std;

 int main()
{

    int m, n;
    bool found = false;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));


    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int t;
    
    cin >> t;
     for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++){
           if(t==a[i][j]){
            found = true;
            break;
           }
        }
    }
    if(found){
        cout << "1"<<endl;
    }
    else{
        cout << "0"<<endl;
    }

    return 0;
}
