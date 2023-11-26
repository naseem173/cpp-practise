#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> a){

    for (int i = a.size()-1; i >= 0; i--)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    
}

int main(){

    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    cout << "reverse array is" << endl;
    reverseArray(a);
    return 0;
}