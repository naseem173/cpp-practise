// #include<iostream>
// using namespace std;

// void permutation(char *a,int i){
//     //base case
//     if(a[i]=='\0'){
//         cout<<a<<endl;
//         return;
//     }
   

//    //recursive case

//    for(int j=i;a[j]!='\0';j++){
//     swap(a[j],a[i]);
//            permutation(a,i+1);
//     //Recursion
//     swap(a[i],a[j]);
//    }
// }


// int main(){
//     char a[]="abc";
//     permutation(a,0);

//     return 0; 
// }

#include<iostream>
using namespace std;

bool isLeap(int year){
if((year %4==0 && year %100 !=0)||(year%400 ==0)){
return true;
}
return false;
}
int main(){
int year;
cout<<"Enter year";
cin>>year;

if(isLeap(year)){
cout<<year<<" is leap year"<<endl;
}else{
cout<<year<<" is not leap year"<<endl;
}
return 0;
}