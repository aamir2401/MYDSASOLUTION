#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& arr, int& key, int& size, int s, int e)
{
    if(s > e)