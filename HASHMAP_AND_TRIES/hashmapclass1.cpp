// homework question--> create a datastructure in which we can do insertion deletion get random in O(1) tc

#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    //
    unordered_map<string, int> m;
    pair<string, int> p = make_pair("City", 1);
    //insetion 1;
    m.insert(p);


    //insertion 2;
    pair<string, int> p2("state", 2);
    m.insert(p2);


     // insertion 3
    m["Name"] = 3;

    //accessing the value from hashmap --> 1;
    cout<<m.at("City")<<endl;

    //accessing the value from hashmap --> 2;
    cout<<m["state"]<<endl;

    //find method--> count, find;
    cout<<m.count("state")<< endl;


    cout<<m.size()<<endl;


    //iterating through map;
    for(auto i : m)
    {
        cout<<i.first <<"-->" <<i.second<< endl;
    }

    
}
