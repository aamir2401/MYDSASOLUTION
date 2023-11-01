#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};




void printing(Node* head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp -> next;
    }
}




void insertAtHead(Node* &head,Node* &tail, int data)
{
    if(head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }
      Node* temp = new Node(data);
      temp -> next = head;
      head = temp;
}




void insertAtTail(Node* &tail,Node* &head, int data)
{
    if(head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}




int countNode(Node* &head)
{
    if(head == NULL)
    {
        return 0;
    }
   int count = 0;
   Node* temp = new Node();
   temp = head;
   while(temp != NULL)
   {
    count++;
    temp = temp -> next;
   }
   return count;
}



void connectAtMiddle(Node* &head,int addThis)
{
 int length =  countNode(head);
 if(length == 0)
 {
    return;
 }
 int mid = length / 2;
 int traversee = 1;
 Node* temp = new Node();
 temp = head;
 while(traversee < mid)
 {
    temp = temp -> next;
    traversee++;
 }
 Node* newNode = new Node(addThis);
 Node* prev = temp;
 Node* curr = temp -> next;
 newNode -> next = curr;
 prev -> next = newNode;
//  return head;
}



int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(2);
    Node *e = new Node(8);

    head->next = b;
    b->next = c;
    c->next = NULL;

    insertAtHead(head,tail,11);
    insertAtHead(head,tail,12);
    insertAtHead(head,tail,13);
    insertAtHead(head,tail,14);
    insertAtHead(head,tail,15);
    insertAtHead(head,tail,16);
    
   insertAtTail(tail,head, 5);
   insertAtTail(tail,head, 6);
   insertAtTail(tail,head, 7);
   insertAtTail(tail,head, 8);
   insertAtTail(tail,head, 9);
   insertAtTail(tail,head, 10);
    cout<<"Total nodes before connect= "<<countNode(head) <<endl;
    int addThis = 1000;
    connectAtMiddle(head,addThis);
    cout<<"Total nodes after connect= "<<countNode(head) <<endl;
    cout<<"printing LINKED LIST after connect"<< endl;
    printing(head);

    return 0;
}