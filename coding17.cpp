/*
Given the input string find out whether the string is pangram or not.

Note: a string is said to be pangram if it contains all the alphabets from 'a' to 'z'.

Contraints:
1 <= length <= 100000

Input:
There is only one line in the input string.

Output:
Yes if it its pangram
No if not a pangram

Example

input
The quick brown fox jumps over the lazy dog

output
Yes
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    //converting the string into lower case
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i]>=65 and s[i]<=90) //'A' = 65 and 'a' = 97
        {
            s[i] = s[i]+32;
        }
    }

    int freq[26];

    for(int i = 0; i<s.length(); i++)
    {
        char ch = s[i];     //ch = 'c':put it into index 2 of freq array
        int index = ch - 'a'; //ch = 'c' 99-97 = 2
        freq[index]++;
    }

    bool pangram = true;
    for(int i = 0; i<26; i++)
    {
        if(freq[i] == 0)
        {
            pangram = false;
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;

}

/*
Explanation:
it contains all characters from 'a' to 'z'.

1.first convert the whole string into lowercase
2.Next in the freq array add the charaters one by one by its own place....such as freq[0] = a, freq[1] = b, freq[2] = c etc.
3.Then check the freq array if any index is empty then the string is not pangram. otherwise its a pangram
*/
