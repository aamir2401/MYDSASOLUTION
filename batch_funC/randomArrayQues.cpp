#include<iostream>
#include<vector>
using namespace std;
void insertAtBegning(int n, int arr[], int valueToInsert)
{
     for(int i=n; i>=0; i--)
     {
        arr[i] = arr[i-1]; 
     }
     arr[0] = valueToInsert;
}


int getsecondLargestNumber(int arr[], int size)
{
      int largest = arr[0];
      int sLargest = -1;
      for(int i=1; i<size; i++)
      {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
      }
      for(int i=0; i<size; i++)
      {
        if(arr[i] < largest && arr[i] != largest)
        {
            sLargest = arr[i];
        }
      }
      return sLargest;
}


int checkPalindromeInteger(int n)
{
    //  int originalN = n;
    int ans = 0;
    while(n>0)
    {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n/10;
    }
    return ans;
}




char toupperCase(char ch)
{
    char dup = ch;
    return toupper(dup);

}

void bubbleSortAlgo(int arr[], int size)
{
    for(int i=size-1; i>=0; i--)
    {
        for(int j=0; j<=i-1; j++)
        {
            if(arr[j]> arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Printing the array after bubble sort"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}





void selectionsort(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"Printing the array after selection sort"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}







int getFactorial(int d)
{
    if(d == 0 || d == 1)
    {
        return 1;
    }
     int ans = d * getFactorial(d-1);
     return ans;
}





bool checkPrime(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    //check number is odd or even using bitwise operator;
    int n;
    cin>>n;
    if((n&1) == 0)//this is syntx for bitwise checker do use any space in between (n&1)
    {
        cout<<"Given number "<<n<<" is even"<<endl; 
    }
    else
    {
        cout<<"Given number "<<n<<" is odd"<<endl; 
    }









    //return all the prime numbers from 1 to n;
    // int n;
    // cout<<"Enter N "<<endl;
    // cin>>n;
    // for(int i=2; i<=n; i++)
    // {
    //     bool isPrime = checkPrime(i);
    //     if(isPrime)
    //     {
    //         cout<<i<<" is prime number"<<endl;
    //     }
    // }








    //get strong number if true orint yes else no;
    //eg of strong number --> 145 = 1!+4!+5!=145 so it is strong nmbr
    // int strongNumber = 0;
    // int n = 145;
    // int copy = n;
    // while(n != 0)
    // {
    //     int d = n % 10;
    //     int ansOfFactorial = getFactorial(d);
    //     strongNumber = strongNumber + ansOfFactorial;
    //     n = n / 10;
    // }
    // if(copy == strongNumber)
    // {
    //     cout<<"Given number "<<copy<<" is STRONG number";
    // }
    // else
    // {
    //     cout<<"Given number "<<copy<<" is not STRONG number";
    // }











    //find the smallest and largest digit of a number;
    // int n = 12;
    // int mini = 1212112;
    // int maxi = 0;
    // cout<<"For a given number "<<n<<endl;
    // while(n != 0)
    // {
    //     int d = n % 10;
    //     mini = min(mini,d);
    //     maxi = max(maxi,d);
    //     n = n/10;
    // }
    
    // cout<<"The smallest digit is : "<<mini<<endl;
    // cout<<"The largest digit is : "<<maxi<<endl;








    // for (int i = 1; i <= 5; i++) {
    // cout<<"JAdwedhj "<<i<<endl;
    
    // if (i == 3) {
    //     continue; // Skip the rest of the current iteration and go to the next
    // }
    
    // More code here
    //  cout<<"here u are"<<endl;









    //count eaach element frequency in an array;
    // int arr[] = {1,1,2,3,1,5,2,2,3};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int n = size;
    // vector<bool> copy(size,false);
    
    // for(int i=0; i<size; i++)
    // {
    //     if(copy[i] == true)
    //     {
    //        continue;
    //     }
    //     int count = 1;
    //     for(int j=i+1; j<size; j++)
    //     {
    //         if(arr[i] == arr[j] && copy[j] == false)
    //         {
    //             count++;
    //             copy[j] = true;
    //         }
    //     }
    //     cout<<"count of "<<arr[i]<<" is "<<count<<endl;
        
    // }









    //replace all 0s with 1s in an integer'
    // int a = 110020;
    // int xerox = a;
    // int ans = 0;
    // int finalAns = 0;
    // while(a != 0)
    // {
    //     int digit = a % 10;
    //     if(digit == 0)
    //     {
    //         ans = ans * 10 + 1;
    //     }
    //     else
    //     {
    //         ans = ans * 10 + digit;
    //     }
    //     a = a / 10;
    // }
    // while(ans != 0)
    // {
    //     int d = ans % 10;
    //     finalAns = finalAns * 10 + d;
    //     ans = ans / 10;
    // }
    // cout<<"Before modification :"<<xerox<<endl;
    // cout<<"After modification :"<<finalAns;






    //selection sort;
    // int arr[] = {13,46,24,52,20,9};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<"Printing the array before selection sort"<<endl;
    // for(int i=0; i<size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // selectionsort(arr,size);









    //bubble sort--> in bubble sort we will check if i and i+1 is sorted or not if sorted ignore, else sort by swapping the index element;
    // int arr[] = {13,46,24,52,20,9};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<"Printing the array before bubble sort"<<endl;
    // for(int i=0; i<size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // bubbleSortAlgo(arr,size);







    //convert binary to decimal
    // string s = "111";
    // int ans = 0;
    // int base = 1;
    // int n = s.length();
    // for(int i= n - 1; i>=0; i--)
    // {
    //     if(s[i] == '1')
    //     {
    //         ans = ans + base;
    //     }
    //     base = base * 2;
    // }

    // cout<<"binary to decimal is "<<ans;





    
    // int n=8;
    // int arr[6] = {1,2,3,4,5,6};
    // int valueToInsert = 0;
    // cout<<"Printing before Insert in begining"<<endl;
    // for(int i=0; i<6; i++)
    // {
    //       cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // insertAtBegning(n,arr,valueToInsert);
    //     cout<<"Printing after Insert in begining"<<endl;
    // for(int i=0; i<7; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }



//    int n = 21;
//    int anss = checkPalindromeInteger(n);
//    if(anss == n)
//    {
//     cout<<"Number is palindrome"<<endl;
//    }
//    else
//    {
//     cout<<"Number is not palindrome";
//    }





    // to find the second largest and second smallest element in an array;
    // int arr[] = {1,2,4,7,7,5};
    // int s = 6;
    // int secondLargestNumber = getsecondLargestNumber(arr,s);
    // cout<<"secondLargestNumber is "<<secondLargestNumber<<endl;
    // int secondSmallestNumber = getsecondSmallestNumber();





    // concatinate string;
    // string s1 = "hello";
    // string s2 = "world";
    // s2 = s1 + s2;
    // cout<<"Concatinated string "<<s2;
    







    //change each case of the character --> lower to upper and upper to lower;
    // string s1 = "This world Is so Mean and ChEaPP";
    // int i=0;
    // int sizee = s1.size();
    // while(i<sizee)
    // {
    //    if(s1[i] >= 'a' && s1[i] <= 'z')
    //    {
    //      s1[i] = toupper(s1[i]);
         
    //    }
    //    else if(s1[i] >= 'A' && s1[i] <= 'Z')
    //    {
    //        s1[i] = tolower(s1[i]);
          
    //    }
    //    else
    //    {
    //       i++;
    //    }
    //     i++;
    // }
    // cout<<s1;
    // string ans = changingCase(s1);

    return 0;


    




    //find the factors of given number;
    // int n;
    // cout<<"Input the number u wish to get factor of :"<<endl;
    // cin>>n;
    // cout<<"The number u have given input is :"<<n<<endl;
    // cout<<"Factors are : ";
    // for(int i=1; i<=n; i++)
    // {
        
    //     if(n % i == 0)
    //     {
    //         cout<<i<<" ";
    //     }
    // }
}

