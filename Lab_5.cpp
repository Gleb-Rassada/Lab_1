#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str1[20];
    char str2[20];
    cout << "Enter a string:\n";
    gets_s(str1); // VS ругается на gets();
    int length1 = strlen(str1);
    for (int i = 0, j = length1-1; i < length1; i++, j--) {
        str2[i] = str1[j];
    }
    str2[length1] = '\0';
    cout << "Inverted string:\n";
    cout << str2;
}