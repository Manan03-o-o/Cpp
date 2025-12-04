#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, string> dict;
    int n;
    cin >> n;

    string word, meaning;

    for (int i = 0; i < n; i++) {
        cin >> word >> meaning;
        dict[word] = meaning;
    }

    string search;
    cin >> search;

    if (dict.count(search))
        cout << dict[search];
    else
        cout << "Word not found!";

    return 0;
}
// This program implements a mini dictionary using a map to store word-meaning pairs. It reads a specified number of entries, stores them, and allows the user to search for a word
// to retrieve its meaning. If the word is not found, it outputs an appropriate message.
