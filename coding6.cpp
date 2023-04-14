/*
Write a Program to print whether the given alphabet is vowel or consonant
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if(ch >='A' && ch <='Z')
    {
        ch = 'a' + (ch - 'A');
    }
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "Vowel" << endl;
    }
    else
        cout << "Consonents" << endl;

    return 0;
}