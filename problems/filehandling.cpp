#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("test.txt");
    out << "Hello File!";
    out.close();

    ifstream in("test.txt");
    string line;
    getline(in, line);
    cout << line;
}
