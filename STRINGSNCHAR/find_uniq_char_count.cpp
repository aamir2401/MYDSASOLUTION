//This question was asked in wipro wilp 2024
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int getUniqueCharCount(const string &str)
{
    if(str.length() == 0)
    return -1;
    unordered_set<char> s;
    for(auto ch : str)
    {
        s.insert(ch);
    }
    return s.size();
}
int main()
{
    string str;
    cout<<"Enter string to get unique count:"<<endl;
    getline(cin,str);
    cout<<"str with spaces: "<<str<<endl;
    int result = getUniqueCharCount(str);
    cout<<"Result for unique char count: "<<result<<endl;



    return 0;
}