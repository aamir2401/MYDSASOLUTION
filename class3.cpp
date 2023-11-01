#include <iostream>
using namespace std;
// int main()
// {

// int main() {
// 	int i=0;
// 	i=i+1;
// 	cout<<i;
// 	/*print i \*/
//     i=i+1;
// 	cout<<++i;
// }
// int main() {
// 	float l, b;
//     cin>>l>>b;
// 	float P = 2*(l+b);
// 	cout<<("Perimeter=", P);
// }
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++i)
        {
            cout << "*\n";
        }
        cout << endl;
    }
}

// int broNum;
// cin>>broNum;
// if (broNum==0)
// {
//     cout<<"bat ban gai!";
// }
// else if (broNum==1)
// {
//     cout<<"bat nahi bani";
// }

// for (int i = 0; i <= 10; )
// {
//     /* code */
//     cout<<i<<endl;
// }

// int i;
// if(cin>>i)
// {
//     cout<<"a";
// }
//   for (int row = 0; row < 5; row++)
//   {
//     for (int col = 0; col < 5; col++)
//     {
//         cout<<" * ";
//     }
//     cout<<endl;
//   }

// printing hollow pattern
//  for (int row = 0; row < 4; row++)
//  {
//      if(row == 0 || row == 3)
//      {
//          for (int col = 0; col < 4; col++)
//          {
//              cout<<"* ";
//          }

//     }
//     else
//     {
//         cout<<"* ";
//         for (int col = 1; col < 5; col++)
//         {
//             cout<<" ";

//         }
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// half pyramid
//  int n;
//  cin>>n;
//  for (int row = 0; row < n; row++)
//  {
//      for (int col = 0; col < row+1; col++)
//      {
//          cout<<"* ";
//      }
//      cout<<endl;
//  }

//   int n;
//   cout<<"give the value of n";
//   cin>>n;
//   for (int row = 0; row < n; row++)
//   {
//     for (int col = 0; col < row; col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
//   }

// int n;
// cin>>n;
// for (int row = 0; row < n; row++)
// {
//    if(row == 0 || row == n-1)
//    {
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"* ";
//     }

//    }
//    else
//    {
//     cout<<"* ";
//     for (int col = 1; col <row -1 ; col++)
//     {
//         cout<<" ";

//     }
//     cout<<" *";

//    }
//    cout<<endl;
// }

// }