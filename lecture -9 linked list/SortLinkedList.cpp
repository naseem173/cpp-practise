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

class LinkedList{
    private:
        node *head;
    public:
        LinkedList(){
            head = NULL;
        }
        //inseting function
    void insert(int data){
        node *newNode = new node(data);
        if(head==NULL){
            head = newNode;
            return;
        }
        node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
    }
    temp->next = newNode;

    }


//print function

void print(){
    node *temp = head;
    while(temp!= NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout <<"Null"<< endl;
}
};

    int main(){

    LinkedList linkedList;
    linkedList.insert(1);
    linkedList.insert(2);
    linkedList.insert(3);
    linkedList.insert(4);
    linkedList.insert(5);
    linkedList.insert(6);

    cout << "Elements in the Linkedlist: ";
    linkedList.print();

    return 0;
}