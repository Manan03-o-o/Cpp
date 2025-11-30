#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    int n;
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i].name >> s[i].marks;

    sort(s, s + n, [](Student a, Student b){
        return a.marks > b.marks;
    });

    for (int i = 0; i < n; i++)
        cout << s[i].name << " " << s[i].marks << endl;

    return 0;
}
