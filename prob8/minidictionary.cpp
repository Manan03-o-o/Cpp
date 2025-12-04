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
