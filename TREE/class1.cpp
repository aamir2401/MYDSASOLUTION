// #include<iostream>
// #include<queue>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     //constructor;
//     Node(int data)
//     {
//         this -> data = data;
//         left = NULL;
//         right = NULL;
//     }

// };
// Node* buildingTree()
// {
//     int data;
//     cout<<"Enter data: "<<endl;
//     cin>> data;
//     Node* root = new Node(data);
//     if(data == -1)
//     {
//         return NULL;
//     }
//     cout<<"Enter data for left of "<<data<<" node"<<endl;
//     root -> left = buildingTree();
//     cout<<"Enter data for right of "<<data<<" node"<<endl;
//     root -> right = buildingTree();
// }

// void levelOrderTraversal(Node* root)
// {
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty())
//     { 
//            Node* temp = q.front();
//             q.pop();
//            if(temp == NULL)
//            {
//              cout<<endl;
//              if(!q.empty())
//              {
//                 q.push(NULL);
//              }
//            }
//            else
//            {
//            cout<<temp -> data<<" ";
//            if(temp->left)
//            {
//             q.push(temp->left);
//            }
//            if(temp->right)
//            {
//             q.push(temp->right);
//            }
//            }
//     }
// }
// int convertIntoSumTree(Node* root)
// {
//     if(root == NULL)
//     {
//         return 0;
//     }
//     int leftSUm = convertIntoSumTree(root -> left);
//     int rightSum = convertIntoSumTree(root -> right);
//     root -> data = leftSUm + rightSum + root -> data;
//     return root -> data;
// }
// int main()
// {
//   Node* root = NULL;
//   root = buildingTree();

  
//   levelOrderTraversal(root);
//   int treeSum = convertIntoSumTree(root);
//    cout<<"Final sum of tree node is: "<<treeSum<<endl;
//     return 0;
// }




// #include<iostream>
// #include<queue>
// using namespace std;
// class Node
// {
//     public:
//      int data;
//      Node* left;
//      Node* right;
//      Node(int data)
//      {
//         this -> data = data;
//         left = NULL;
//         right = NULL;
//      }
// };
// Node* buildingTree()
// {
//     int data;
//     cout<<"Enter data: "<<endl;
//     cin>>data;
//     if(data == -1)
//     {
//         return NULL;
//     }
//     Node* root = new Node(data);
//     cout<<"Enter the data for left of "<<data<<endl;
//     root -> left = buildingTree();
//     cout<<"Enter the data for right of "<<data<<endl;
//     root -> right = buildingTree();
//     return root;

// }
// void levelOrderTrav(Node* root)
// {
//     queue <Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty())
//     {
//         Node* temp = q.front();
//         q.pop();
//         if()
//     }
    

// }
// int main()
// {
//    Node* root = NULL;
//    root = buildingTree();
   





//     return 0;
// }