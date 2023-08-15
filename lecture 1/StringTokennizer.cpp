#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[]="heloofsdjfbldkfa.ff.ds.f..fsd@@";
    char *x = strtok(a,".?@#$%!");
    while(x!=NULL){
    cout<<x<<endl;
    x=strtok(NULL, ".?@#$%!");
    }
    return 0;
}
