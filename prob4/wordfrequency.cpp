#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string s, word;
    getline(cin, s);

    map<string, int> freq;
    stringstream ss(s);

    while (ss >> word)
        freq[word]++;

    for (auto &p : freq)
        cout << p.first << " : " << p.second << endl;

    return 0;
}
