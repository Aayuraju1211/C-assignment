//Problem
//WAP to find the difference between ASCII of two characters ,take them as input .

// Solution
#include<iostream>
using namespace std;
int main(){
    char char1, char2;
    cout << "Enter the first character: ";
    cin >> char1;
    cout << "Enter the second character: ";
    cin >> char2;

    int ascii1 = int(char1);
    int ascii2 = int(char2);

    int difference = abs(ascii1 - ascii2);

    cout << "The difference between the ASCII values of '" << char1 << "' and '" << char2 << "' is " << difference << endl;

    return 0;

}