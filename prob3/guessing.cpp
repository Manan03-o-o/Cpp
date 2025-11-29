#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 10; 
    int guess;

    cin >> guess;

    if (guess == secret) cout << "Correct!";
    else cout << "Wrong! Number was " << secret;

    return 0;
}
