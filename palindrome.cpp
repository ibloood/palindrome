#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

    char toUp[100]= "";
    char s[100] = "";

    string str1;
    string str2;
    int i = 0;

    // Read a string
    cout << "Write a phrase or a word: ";
    gets(toUp);

    // Transform a string to Uppercase
    while (toUp[i]){
        s[i] = toupper(toUp[i]);
        i++;
    }
    system("cls");
    str1 = s;

    // Remove all spaces from string
    str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
    str1.erase(remove(str1.begin(), str1.end(), ','), str1.end());
    str1.erase(remove(str1.begin(), str1.end(), '?'), str1.end());
    str1.erase(remove(str1.begin(), str1.end(), '!'), str1.end());
    str1.erase(remove(str1.begin(), str1.end(), '.'), str1.end());
    str2 = str1;

    // Reverse a string
    reverse(str2.begin(), str2.end());
    cout << "str1: " << str1 << " str2: " << str2 << endl;

    // Compare if the amount received can be a palindrome
    if(str1.compare(str2) == 0){
        cout<<"Is Palindrome"<<endl;
    } else {
        cout<<"Isn't Palindrome"<<endl;
    }
}
