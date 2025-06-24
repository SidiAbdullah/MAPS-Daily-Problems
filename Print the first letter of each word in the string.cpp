/*
  Prints the first letter of each word in a string.
  Extra spaces are removed before processing.

  Example:
    Input : "  Programming   Advices  "
    Output:
      P
      A
*/

#include <iostream>
#include <string>
using namespace std;

// Removes leading, trailing, and extra internal spaces
string clean(string &s) {
    for (int i = 0; i < s.length() - 1;) {
        if (s[i] == ' ' && s[i + 1] == ' ')
            s.erase(i, 1);
        else
            i++;
    }
    if (!s.empty() && s.front() == ' ') s.erase(0, 1);
    if (!s.empty() && s.back() == ' ')  s.pop_back();
    return s;
}

void printFirstLetters(string s) {
    clean(s);
    if (!s.empty()) cout << s[0] << '\n';
    for (int i = 1; i < s.length() - 1; ++i)
        if (s[i] == ' ')
            cout << s[i + 1] << '\n';
}

int main() {
    string text = "  Programming   Advices  ";
    printFirstLetters(text);
    return 0;
}
