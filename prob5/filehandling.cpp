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

// This C++ program appends a new line to a file named "data.txt"
// and then reads and prints the entire content of the file to the console.
// It uses the C++14 standard for file handling operations.
// The program demonstrates basic file I/O operations including
// opening a file in append mode, writing to it, and reading from it.
// Make sure to have "data.txt" in the same directory as the executable
// or it will create a new file if it doesn't exist.
// Compile with: g++ -std=c++14 filehandling.cpp -o filehandling
// Run with: ./filehandling
// Expected output: The content of "data.txt" including the newly added line.