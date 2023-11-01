#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void printing(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
}
void insertAtHead(Node* &head, Node* &tail, int data)
{
    if(head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    Node* temp = head;
    temp -> prev = newNode;
    newNode -> next = head;
    newNode -> prev = NULL;
    head = newNode;
}


int getLength(Node* &head)
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

void insertAtPosition(Node* &head, Node* &tail, int pos, int data)
{
   if(head == NULL)
   {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
   }
   int totalLength = getLength(head);
   if(pos > totalLength)
   {
    cout<<"You are giving wrong position"<<endl;
   }
   if(pos == 1)
   {
    insertAtHead(head, tail, data);
   }
   int goingToPos = 1;
   Node* temp = head;
   while(goingToPos < pos - 1)
   {
      temp = temp -> next;
      goingToPos++;
   }
   
   Node* back = temp;
   Node* ahead = temp -> next;
   Node* nodeToBeAdded = new Node(data);
   nodeToBeAdded -> next = ahead;
   ahead -> prev = nodeToBeAdded;
   back -> next = nodeToBeAdded;
   nodeToBeAdded -> prev = back;
}
int main()
{
    // Node* first = new Node(1);
    // Node* second = new Node(2);
    // Node* third = new Node(3);
    // Node* fourth = new Node(4);
    // Node* fifth = new Node(5);
    // Node* head = first;
    // Node* tail = fifth;
    // first -> next = second;
    // first -> prev = NULL;

    // second -> next = third;
    // second -> prev = first;

    // third -> next = fourth;
    // third -> prev = second;

    // fourth -> next = fifth;
    // fourth -> prev = third;

    // fifth -> next = NULL;
    // fifth -> prev = fourth;

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,1);
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,3);
    insertAtHead(head,tail,4);
    insertAtHead(head,tail,5);
    // cout<<"Printing before adding to position of D L L"<<endl;
    printing(head);
    cout<<endl;
    insertAtPosition(head, tail, 1, 1000);
    cout<<"Printing after adding to position of D L L"<<endl;
    printing(head);
    


    return 0;
}