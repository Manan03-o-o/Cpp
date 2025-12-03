#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int words = 0, chars = 0, sentences = 0;

    for (char c : s) {
        if (!isspace(c)) chars++;
        if (c == '.' || c == '!' || c == '?') sentences++;
    }

    for (int i = 0; i < s.length(); i++)
        if ((i == 0 && !isspace(s[i])) || (isspace(s[i]) && i+1 < s.length() && !isspace(s[i+1])))
            words++;

    cout << "Words: " << words << endl;
    cout << "Characters: " << chars << endl;
    cout << "Sentences: " << sentences << endl;

    return 0;
}
