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

//Insert at end

void insertAtEnd(node* &head, node* &tail,int data){
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

//Print

void printLL(node* temp){
    while(temp!=NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
}

// Find the element's position

// int findPos(node* head, int element){
//     int pos = 0;
//     node *current = head;
//     while(current != NULL){
//         pos++;
//         if(current->data == element)
//             return pos;

//         current = current->next;
//     }
//     return -1; //element not found
// }

int findPos(node* head, int k){
    if(head == NULL || k<=0){
        return  -1; 
    }
    node *slow = head;
    node *fast = head;

    //Move fast
    for (int  i = 0; i < k; i++)
    {
        if(fast == NULL)
            return -1;
        fast = fast->next;
    }

    while(fast != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    return slow->data;
}


int main(){
    node *head, *tail;
    head = tail = NULL;
    int k, tempN;

    while(true){
        cin>>tempN;
        if(tempN==-1){
            break;
        }
        else{
        insertAtEnd(head, tail, tempN);
    }
    }

    cin >> k;
    int position = findPos(head, k);

    if(position!=-1){
        cout << position << endl;
    }
    else{
        cout << "-1"<<endl;
    }

    

    return 0;

}