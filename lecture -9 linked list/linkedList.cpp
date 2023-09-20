#include<iostream>

using   namespace std;

class node{
    public:
    int data;
    node *next;
       node(int d){
        data = d;
        next = NULL;
       }
};



// ---------------------Insertion-------------------------------------------

void insertAtFront(node * &head, node * &tail, int data){
    if(head == NULL) {
        node* n = new node(data);
        head = tail = n;
    }
    else{
        node* n = new node(data);
        n->next = head;
        head = n;
    }
}

void printLL(node* temp){
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
}
cout<<"Null\n";
}




int main(){

    node *head, *tail;

    head = tail= NULL;

    insertAtFront(head, tail, 1);
    insertAtFront(head, tail, 2);
    insertAtFront(head, tail, 3);
    



    return 0;

}