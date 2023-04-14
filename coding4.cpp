/*
Given a string S that represents column title of an Excel sheet, find the number that represents that column.
In excel A column is number 1, AA is 27 and so on.

INPUT:
A single line pf input containing string S.

OUTPUT:
Print the column number.

Constraints:
1 <= |S| <= 7

Example:

Input
A
AA
Output
1
27

*/


#include <bits/stdc++.h>
using namespace std;

int titleToNumber(char s[])
{
    int result = 0;
    for(int i = 0; s[i] ; i++)
    {
        result = result * 26;
        result = result + s[i] - 'A' + 1;
    }
    return result;
}

int main()
{
    char string[20];
    scanf("%s", string);
    int res = titleToNumber(string);
    cout << res << endl;
    return 0;
}

/*
Explanation:

result = 26*result + S[i] - 'A' + 1
AAC
res = 26 * 0 + A - A +1 => 1
res = 26 * 1 + A - A + 1 => 27
res = 26 * 27 + C - A + 1 => 705

*/