#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int d){
            data = d;
            next = NULL;
        }
};



//Insert At end

void insertAtEnd(node* &head, node* &tail, int data){
    if(head == NULL){
        node * n = new node(data);
        head = tail = n;
    }
    else{
        node* n = new node(data);
        tail->next = n;
        tail = n;
    }
}




// Print all

void printLL(node* temp){
    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp -> next;
    }
    
}

int main(){
    node* headOdd, *tailOdd, *headEven, *tailEven;


    headOdd = tailOdd = headEven = tailEven = NULL;

    int n,temper;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>> temper;
        if(temper%2!=0){
        insertAtEnd(headOdd, tailOdd, temper);
        }
        else{
            insertAtEnd(headEven, tailEven, temper);
        }
    }

    //printing

    

   
        printLL(headOdd);
        printLL(headEven);


    return 0;
}