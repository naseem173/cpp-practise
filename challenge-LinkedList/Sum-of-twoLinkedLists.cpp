#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

        node(int d){
            data = d;
            next = NULL;
        }
};

void insertAtEnd(node* &head, node* &tail, int data){
    if(head == NULL){
        node* n = new node(data);
        head = tail = n;
    }
    else{
        node* n = new node(data);
        tail->next = n;
        tail = n;
    }
}




//print

void printLL(node* temp){
   if(temp){
    printLL(temp->next);
    cout << temp->data;
    if(temp->next){
        cout << " ";
    }
   }
}

node* addLL(node* head1,node*head2){
    int carry = 0;
    node *resultHead = NULL;

    while(head1 || head2|| carry){
        int sum = (head1? head1->data :0)+(head2 ? head2->data :0)+ carry;
        carry = sum / 10;
        node *newNode = new node(sum % 10);
        newNode->next = resultHead;
        resultHead = newNode;

        if(head1) head1 = head1->next;
        if(head2) head2 = head2->next;
    }
    return resultHead;
}
int main(){
    node *head1, *tail1, *head2, *tail2;
    head1 = tail1 = head2 = tail2 = NULL;


    int m,n,tempN;
    cin >> m >>n;
    for(int i=0; i<m; i++){
        cin >> tempN;
        insertAtEnd(head1, tail1, tempN);
    }
    for(int i=0; i<n; i++){
        cin >> tempN;
        insertAtEnd(head2, tail2, tempN);
    }

    node* resultHead = addLL(head1, head2);
    printLL(resultHead);

    return 0;
}
