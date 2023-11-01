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
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data <<" " ;
        temp = temp -> next;
    }
}




int getLength(Node* head)
{
    Node* temp = head;
    if(head == NULL)
    {
        return 0;
    }
    int count = 1;
    while(temp != NULL)
    {
        temp = temp -> next;
        count++;
    }
    return count;
}
Node* reverseInKGroup(Node* &head, int k)
{
    if(head == NULL )
    {
        cout<<endl;
        cout<<"Linked List is empty"<<endl;
        return NULL;
    }
    if(head -> next == NULL)
    {
        cout<<endl;
        cout<<"only one node exists"<<endl;
        return head;
    }
    int length = getLength(head);
    if(k > length)
    {
        cout<<endl;
        cout<<"Please enter value between 1 and " <<length - 1;
    }
    int position = 0 ;
    Node* curr = head;
    Node* prev = NULL;
    Node* nextNode = curr -> next;
    while(k > position)
    {
        nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
        position++;
    }
    if(nextNode != NULL)
    {
      head -> next = reverseInKGroup(nextNode,k);
    }
    
    return prev;
}
int main()
{ 
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    Node* sixth = new Node(6);
    Node* head = first;
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = NULL;


    //Task is to printing Linked List in k group reverse order;
    printing(head);
    cout<<endl;

   head = reverseInKGroup(head,3);
   printing(head);



    return 0;
}