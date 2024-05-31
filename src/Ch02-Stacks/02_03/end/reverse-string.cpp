#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseString(const string &input)
{
    stack<char> charStack;

    // Push all characters of the string to the stack
    for (char c : input)
    {
        charStack.push(c);
    }

    string reversedString;

    // Pop all characters from the stack and append them to the reversed string
    while (!charStack.empty())
    {
        reversedString += charStack.top();
        charStack.pop();
    }

    return reversedString;
}

int main()
{
    string str = "this is a test";
    string revStr = reverseString(str);

    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << revStr << endl;

    return 0;
}
