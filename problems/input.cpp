#include<iostream>
using namespace std;

int main() {
    // double price;  
    // cout << "Enter your price: ";
    // cin >> price;   
    // cout << "Your price is = : " << price ;
    int a =10, b=2;
    cout<<" sum ="<< (a+b)<< endl;
    cout<< "Difference = " << (a-b) << endl;
    cout<< "Product = " << (a*b) << endl;
    cout<< "Division = " << (a/b) << endl;
    cout<< "Modulus = " << (a%b) << endl;   
    cout<< (5/(double(2))) << endl; // explicit type conversion to double for accurate division
    return 0;
}
