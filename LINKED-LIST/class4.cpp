#include <iostream>
#include<vector>
// #ifndef NODE_H
// #define NODE_H
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // Node()
    // {
    //     this->data = 0;
    //     this->next = NULL;
    // }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printing(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
}


bool checkForPalindrome(Node* &head)
{
    if(head == NULL)
    {
        return false;
    }
    if(head -> next == NULL)
    {
        return true;
    }
    vector <int> copy;
    Node* temp = head;
    while(temp != NULL)
    {
        copy.push_back(temp -> data);
        temp = temp -> next;
    }
    int s = 0;
    int e = copy.size() - 1;
    while( s < e)
    {
        if(copy[s] != copy[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}



int getLength(Node* &head)
{
    if(head == NULL)
    {
        return 0;
    }
   int count = 0;
   Node* temp = head;
   
   while(temp != NULL)
   {
    count++;
    temp = temp -> next;
   }
   return count;
}


Node* reversing(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr -> next;
    while(curr != NULL)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

bool checkForPalindrome2(Node* &head)
{
    if (head == NULL)
    {
        return false;
    }
    if (head->next == NULL)
    {
        return true;
    }
    int length = getLength(head);
    int middle;
    if (length % 2 == 1)
        middle = length / 2 + 1;
    else
        middle = length / 2;
    
    int traverse = 1;
    Node* midNode = head;
    while (traverse < middle)
    {
        midNode = midNode->next;
        traverse++;
    }
    //now midNode is pointing to middle node of the linked list;
    Node* reverseLLHead = reversing(midNode -> next);

    midNode -> next = reverseLLHead;
    Node* temp1 = head;
    Node* temp2 = midNode -> next;

    while(temp2 != NULL)
    {
        if(temp1 -> data != temp2 -> data)
        {
            return false;
        }
        else
        {
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
    }

    return true;
    

}


// bool checkForPalindrome2(Node* &head)
// {
//     if(head == NULL)
//     {
//         return false;
//     }
//     if(head -> next == NULL)
//     {
//         return true;
//     }
//     int middle;
//     int length = getLength(head);
//     if(length % 2 == 1)
//      middle = length / 2 + 1;
//     else
//     middle = length / 2;
//     int traverse = 1 ;
//     Node* midNode = head;
//     while(traverse < middle)
//     {
//         midNode = midNode -> next;
//         traverse++;
//     }
//     Node* prev = NULL;
//     Node* curr = midNode -> next;
//     Node* forward = curr -> next;

//     while(curr  != NULL)
//     {
//         cout<<"hello here"<<endl;
//         forward = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     midNode -> next = prev;
//     Node* topHead = head;
//     while(topHead != NULL && curr != NULL)
//     {
//         if(topHead -> data != curr -> data)
//         {
//             return false;
//         }
//         else
//         {
//             topHead = topHead -> next;
//             curr = curr -> next;
//         }
//     }
   
//    return true;

// }
int main()
{
    Node *a = new Node(8);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(3);
    Node *e = new Node(2);
    Node *f = new Node(8);
    a -> next = b;
    b -> next = c;
    c -> next = d;
    d -> next = e;
    e -> next = f;
    f -> next = NULL;
   
    Node *head = a;
    Node *tail = a;

    printing(head);
    //task is to check if linked llist is palindrome or not;
    //approach is by creating vector and then checking which take O(n) space;
    // cout<<endl;
    // bool isPalindrome = checkForPalindrome(head);
    // if(isPalindrome)
    // {
    //     cout<<"Given linked list is valid palindrome"<<endl;
    // }
    // else
    // {
    //     cout<<"Given linked list is not valid palindrome"<<endl;
    // }


    //we will not use extra space;
    //apporach will be check for middle node and then after middle node reverse the linked list and then check untill NULL;
    cout<<endl;
    bool isPalindrome = checkForPalindrome2(head);
    if(isPalindrome)
    {
        cout<<"Given linked list is valid palindrome"<<endl;
    }
    else
    {
        cout<<"Given linked list is not valid palindrome"<<endl;
    }

    return 0;

}