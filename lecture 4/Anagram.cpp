#include<iostream>
using namespace std;

void permutation(char *a,int i){
    //base case
    if(a[i]=='\0'){
        cout<<a<<endl;
        return;
    }
   

   //recursive case

   for(int j=i;a[j]!='\0';j++){
    swap(a[j],a[i]);
           permutation(a,i+1);
    //Recursion
    swap(a[i],a[j]);
   }
}


int main(){
    char a[]="abc";
    permutation(a,0);

    return 0; 
}