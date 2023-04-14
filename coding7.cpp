/*
Write a program to Check whether a given number is a prime number or not
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i ==0) //Condition for non-prime no
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        cout << "Prime" << endl;
    else
        cout << "Non-Prime" << endl;
}

