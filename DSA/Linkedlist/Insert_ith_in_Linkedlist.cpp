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

Node* insertNode(Node* head, int i, int data){
    Node* newNode= new Node(data);
    int count=0;
    Node* temp=head;

    if(i==0) {
        newNode->next=head;
        head=newNode;
        return head;
    }

    while (temp!=NULL && count<i-1)
    {
        temp=temp->next;
        count++;
    }

    if(temp!=NULL) {
        newNode->next=temp->next;
        temp->next=newNode;
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

    int i,data;
    cin>>i>>data;
    head=insertNode(head,i,data);
    print(head);
}