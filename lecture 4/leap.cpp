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