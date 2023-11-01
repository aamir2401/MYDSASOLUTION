#include <iostream>
using namespace std;
void printingArr(int arr[][3], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void transposing(int arr[][3], int r, int c, int abc[][3])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            abc[i][j] = arr[j][i];
        }
        cout << endl;
    }
}
int main()
{
    int n_arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;
    cout << "Printig array before transpose" << endl;
    printingArr(n_arr, row, col);
    int blank_arr[3][3];
    transposing(n_arr, row, col, blank_arr);
    cout << "Printig array after transpose" << endl;
   
    printingArr(blank_arr, row, col);

    return 0;
}