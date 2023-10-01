#include<iostream>
using namespace std;

void brackets(char *op, int n, int open,int close, int i)
{
    //base case
    if(i==2*n){
        op[i] = '\0';
        cout << op << endl;
        return;
    }
    if(open > close){
        op[i] = ')';
        brackets(op,n, open, close+1, i + 1);
    }
    if (open < n)
    {
        op[i] = '(';
        brackets(op, n, open+1, close, i + 1);
    }
    
}

int main(){
    int n;
    cin>>n;

    char op[50];

    brackets(op,n,0,0,0);

    return 0;

}