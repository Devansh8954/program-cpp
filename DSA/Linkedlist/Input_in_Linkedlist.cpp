#include <cstddef>
#include<iostream>

class Node{
    public:
        int data;
        Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

using namespace std;

Node* takeinput() {
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while (data!=-1)
    {
        Node* newNode=new Node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else {
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node *head=takeinput();
    print(head);
}