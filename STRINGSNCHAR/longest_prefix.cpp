// #include<iostream>
// using namespace std;
// int main()
// {
//     string ques[3] = {"flower","flow","flight"};
//     int n = ques.length();

//     for(int i=0; i<ques.length(); i++)
//     {
//         cout<<
//     }
   






//     return 0;
// }





#include<iostream>
#include<vector>
using namespace std;
void countingFreq(int arr[], int size)
{
    vector <bool> visited(size, false);
    for(int i=0; i<size; i++)
    {
        if(visited[i] == true)
        {
            //by this we are skipping those elements which are already processed;
            continue;
        }
        int count = 1;
        for(int j = i + 1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout<<arr[i]<<" is "<<count<<" times"<<endl;
    }
}



int findingLargest(int arr[], int size)
{
    int maxElement = arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    return maxElement;
}
int main()
{
    int arr[] = {1,1,13,1,12,139,12,23,23,1,0,2,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    // countingFreq(arr,size);
     int ans = findingLargest(arr, size);
     cout<<"largest element is "<<ans<<endl;






    return 0;
}