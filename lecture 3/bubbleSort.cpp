#include<iostream>
#include<vector>
using namespace std;


void bubbleSort(int *a,int n, int i){

    if(i==n-1){
        return;
    }

    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
        
    }
    bubbleSort(a,n,i+1);
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubbleSort(a.data(),n,0);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}