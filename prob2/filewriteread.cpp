#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("file.txt");
    out << "Hello from C++!";
    out.close();

    ifstream in("file.txt");
    string data;
    getline(in, data);

    cout << data;

    return 0;
}
