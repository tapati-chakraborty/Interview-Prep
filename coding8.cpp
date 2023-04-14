/*
Write a program to change the case of the given alphabet and print.
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z') //uppercase to lowercase
    {
        cout << char('a' + (ch - 'A')) << endl;
    }
    if(ch >= 'a' && ch <= 'z') //lowercase to uppercase
    {
        cout << char('A' + (ch - 'a')) << endl;
    }
    return 0;
}