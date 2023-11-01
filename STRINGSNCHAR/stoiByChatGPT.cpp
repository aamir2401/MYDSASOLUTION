#include <iostream>
#include <string>

using namespace std;

int stringToInt(string str) {
    int num = 0;
    int sign = 1;

    // If the string starts with a negative sign, set the sign variable to -1
    if (str[0] == '-') {
        sign = -1;
        str.erase(0, 1);
    }

    // Iterate through the characters of the string and compute the integer value
    for (char c : str) {
        if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        } else {
            // If the string contains non-numeric characters, return 0
            return 0;
        }
    }
        cout << typeid(num).name() <<num << endl;


    return num * sign;
}

int main() {
    string str;
    cout<<"input a string" <<endl;
    cin>>str;
    int num = stringToInt(str);
    cout <<num << endl;
    return 0;
}
