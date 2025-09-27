
#include <iostream>
using namespace std;
int main(){
    char ch ='E';
    char c = 'A';

    
    for(int i='A'; i<ch; i++){
        for(int j='A'; j<ch; j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}