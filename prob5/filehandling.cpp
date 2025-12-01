#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("data.txt", ios::app);
    out << "New line added!\n";
    out.close();

    ifstream in("data.txt");
    string line;
    while (getline(in, line))
        cout << line << endl;

    return 0;
}
