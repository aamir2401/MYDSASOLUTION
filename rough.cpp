// #include <iostream>
// // #include<string>
// using namespace std;
// int util(int &a)
// {

//     a++;
//     return a;
// }
// int main()
// {
// //    int a = 5;
// //    util(a);
// //    cout<<a;

//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             if(j<i+1)
//             {
//                 cout<<"  ";
//             }
//             else
//             {
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }

// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
    // vector<int> a{1,2,3};
    // vector<int> b{4,5,6};
    // vector<int> c{7,8,9};
    // vector<vector<int> > vec;
    // vec.push_back(a);
    // vec.push_back(c);
    // vec.push_back(b);
    // for(int i=0; i<vec.size(); i++)
    // {
    //     for(int j=0; j<vec[0].size(); j++)
    //     {
    //         cout<<vec[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     vector<vector<int>> vec(4, vector<int>(9,0));
//     for(int i=0; i<vec.size(); i++)
//     {
//         for(int j=0; j<vec[0].size(); j++)
//         {
//             cout<<vec[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
















#include<iostream>
using namespace std;
class Node
{   public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this -> data = data;
        left = NULL;
        right = NULL;

    }
};
Node* buildingTree()
{
    int data;
    cout<<"Enter the data "<<endl;
    cin>>data;
    Node* root = new Node(data);
    if(data == -1)
    {
        return NULL;
    }
    cout<<"Enter data for left of "<<data<<endl;
    root -> left = buildingTree();
    cout<<"Enter data for right of "<<data<<endl;
    root -> right = buildingTree();
    return root;
}
int main()
{
   Node* root = NULL;
   root = buildingTree();

    return 0;
}





/*
console.log("Try programiz.pro");
//using toString method;
let num = 123;
console.log(typeof(num))
let a = num.toString();
console.log(typeof(a))

let array = [1,2,3];
console.log(typeof(array));
let b = array.toString();
console.log(b);

//using join method in js;
let arr = ["hello", "world"];
console.log(arr.join("*"))
console.log(arr.join("{}"))
let bb = arr.pop()
console.log(bb)

// Online Javascript Editor for free
// Write, Edit and Run your Javascript code using JS Online Compiler

// console.log("Try programiz.pro");
// //using toString method;
// let num = 123;
// console.log(typeof(num))
// let a = num.toString();
// console.log(typeof(a))

// let array = [1,2,3];
// console.log(typeof(array));
// let b = array.toString();
// console.log(b);

// //using join method in js;
// let arr = ["hello", "world"];
// console.log(arr.join("*"))
// console.log(arr.join("{}"))
// let bb = arr.pop()
// console.log(bb)



let arr = ["a","z","c","d","e","a","b",];
// let aa = arr.shift();
// console.log(aa);
// console.log(arr.unshift("y"))
// console.log(arr)

// arr.sort();
// console.log(arr)
//this is how we check if it is array of not;;
let arr = ["a","z","c","d","e","a","b",];
console.log(Array.isArray(arr));

*/