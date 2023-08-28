#include<iostream>

using namespace std;
int main(){

    int n, m, k, s;
    cin >> n >> m >> k >> s;
    char **CharArr = new char *[n];
    for (int i = 0; i < n;i++){
        CharArr[i] = new char[m];
    }
    for (int i = 0; i < n;i++){

        for (int j = 0; j < m;j++){
            cin >> CharArr[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if(s<k){
            cout << "No"<<endl;
            break;
        }
        for (int j = 0; j < m;j++){
            if(CharArr[i][j]=='#'){
                break;
            }
            else{
            if(CharArr[i][j]=='.'){
                s = s - 2;
                if(j!=m-1){
                s--;}
            }
            if(CharArr[i][j]=='*'){
                s = s + 5;
                 if(j!=m-1){
                s--;}
            }
            }
            
        }

    }
    if(s>k){
        cout << "Yes" << endl;
        cout << s << endl;
    }

        return 0;
}