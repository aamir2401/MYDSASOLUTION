#include <iostream>
using namespace std;
int main ()
{
      // int n;
      // cin>>n;
      // for (int row = 0; row<n; row++)
      // {
      //   for (int col = 0; col < n; col++)
      //   {
      //      if(row == 0 || col == 0 || col == n-row-1)
      //      {
      //       cout << " *";
      //      }
      //      else
      //      {
      //       cout << "  ";
      //      }
      //   }
      //   cout<<endl;
      // }
      

      // solid pyramid
      // int n;
      // cin>>n;
      // for (int row = 0; row < n; row++)
      // {
      //   /* code  for spaces*/
      //   for (int space = 0; space < n-row-1; space++)
      //   {
      //       cout<<" ";
      //   }
      //   /*code for stars*/
      //   for (int col = 0; col < row+1; col++)
      //   {
      //     cout<<" *";
      //   }
      //    cout<<endl;
      // }



      //number pattern
      // int n;
      // cin>>n;
      // for (int row = 0; row < n; row++)
      // {
      //   int num=row+1;
      //   for (int col = 0; col < row+1; col++)
      //   {
      //     cout<< num <<" ";
      //     num++;
      //   }
      //   cout<<endl;
      // }
      
     // number/reverse number/in a pyramid pattern
      int i;
      cin>>i;
      for (int row = 0; row < i; row++)
      {
        //spaces
        for (int col = 0; col < i-row-1; col++)
        {
          cout<<" ";
        }
        

        //numbers
        int num = row+1;
        for (int j = 0; j < row+1; j++)
        {
          cout<<num;
          num++;
        }
        

        //reverse numbers
        int rev = 2*row;
        for (int z = 0; z < row; z++)
        {
          cout<<rev;
          rev--;
        }
        

        cout<<endl;
      }
      
}