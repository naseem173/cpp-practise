#include<iostream>
#include<vector>
using namespace std;

int maxCircularSum(int a[], int n){
    int totalSum=0,z=1;
    while(z!=n){
    int currSum=0;
    for(int j=z;j<n;j++){
        currSum+=a[j];
        if(totalSum<currSum){
            totalSum=currSum;
        }
    }

    for(int j=0;j<z;j++){
        currSum+=a[j];
        if(totalSum<currSum){
            totalSum=currSum;
        }
    }
   z++;
    }    
    return totalSum;
}

int main(){
    int t,n;
    cin>>t>>n;
    while(t--){
        vector<int> a(n);
        int sum=0,posSum=0,negSum=0,count=1,min=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(min>a[i]){
                min=a[i];
            }
            if(a[i]>0){
                posSum+=a[i];
            }
            if(a[i]<0){
                negSum-=a[i];
                count++;
            }   
        }
        //all neg logic
        if(count==n){
            cout<<min<<endl;
        }
        //max logic
        else if(sum==posSum)
        cout<<sum<<endl;
        
        else{
            int ans = maxCircularSum(a.data(), n);
            cout<< ans <<endl;
        }

        
    }
    return 0;
}