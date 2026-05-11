#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "Hello World";

    // length()
    cout << "Length of string: ";
    cout << str.length() << endl;

    // size()
    cout << "Size of string: ";
    cout << str.size() << endl;

    // substr(pos, len)
    cout << "Substring: ";
    cout << str.substr(0, 5) << endl;

    // find(str)
    cout << "Position of World: ";
    cout << str.find("World") << endl;

    // append(str)
    str.append(" Welcome");

    cout << "After append: ";
    cout << str << endl;

    // replace(pos, n, str)
    str.replace(6, 5, "C++");

    cout << "After replace: ";
    cout << str << endl;

    // empty()
    string s = "";

    if(s.empty()) {
        cout << "String is empty" << endl;
    }
    else {
        cout << "String is not empty" << endl;
    }

    return 0;
}