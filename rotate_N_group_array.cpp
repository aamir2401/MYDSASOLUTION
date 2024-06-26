// // #include <iostream>
// // #include <vector>
// // #include <map>
// // using namespace std;
// // int main()
// // {
// //     // int arr[] = {1,2,4,5,6,7,8,9};
// //     // int k = 3;
// //     // int sze = 8;
    
// //     string s = "aamiraamiraamiraamir";
// //     // map<int, int> mp;
// //     int arr[26] = {0};
// //     for(int i=0; i<s.length(); i++)
// //     {
// //         char ch = s[i];
// //         ch = ch - 'a';
// //         arr[ch]++;
// //     }
// //     for(int i=0; i<26; i++)
// //     {
// //         cout<<arr[i]<<" "<<endl;
// //     }





// //     return 0;
// // }


// #include <iostream>
// #include <vector>
// #include <map>
// using namespace std;

// int main() {
//     string s = "aamir";
//     int arr[26] = {0};  // Use int array for counting

//     // Calculate the frequency of each character
//     for (char ch : s) {
//         ch = ch - 'a';
//         arr[ch]++;
//     }

//     // Print the frequency of each character
//     for (int i = 0; i < 26; i++) {
//         if (arr[i] > 0) {
//             cout << static_cast<char>(i + 'a') << ": " << arr[i] << endl;
//         }
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
char extraChar(string s1, string s2)
{
    
    //code here
    int arr[26] = {0};
    char ans = '\0';
    cout<<"hey"<<ans<<endl;
    for(int i=0; i<s1.length(); i++)
    {
        char ch = s1[i];
        ch = ch - 'a';
        arr[ch]++;
    }
    for(int i=0; i<s2.length(); i++)
    {
        char ch1 = s2[i];
        ch1 = ch1 - 'a';
        arr[ch1]--;
    }
    for(int i=0; i<26; i++)
    {
        if(arr[i] > 0)
        {
            ans = arr[i] + 'a';
        }
    }
    cout<<ans;
    // return ans;
}
int main()
{

    string s = "abcd";
    string j = "abcde";
    extraChar(s,j);














    // string s = "caaasting";
    // int arr[26] = {0};
    // for(int i=0; i<s.length(); i++)
    // {
    //     char ch = s[i];
    //     ch = ch - 'a';
    //     arr[ch]++;
    // }
    // for(int i=0; i<26; i++)
    // {   if(arr[i] > 0)
    //     cout<<"Letter: "<< static_cast<char>(i + 'a') <<" is " <<arr[i]<<" times"<<endl;
    // }
}