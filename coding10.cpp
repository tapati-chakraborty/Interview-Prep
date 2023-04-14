/*
Write a program to find the most occurring character in the string.
*/

#include <bits/stdc++.h>
#define MAX_SIZE 100
#define MAX_CHAR 26

using namespace std;

int main()
{
    char str[MAX_SIZE];
    scanf("%[^\n]s", str);

    //freq storing array
    int freq[MAX_CHAR];
    for(int i = 0; i < MAX_CHAR; ++i)
    {
        freq[i] = 0;
    }

    //freq of each char is counted
    for(int i = 0; str[i] != '\0'; ++i)
    {
        int isalphabet = 0, offset;
        if(str[i] >='a' && str[i] <='z')
        {
            isalphabet = 1;
            offset = str[i] - 'a';
        }
        else if(str[i] >='A' && str[i] <='Z')
        {
            isalphabet = 1;
            offset = str[i] - 'A';
        }

        if(isalphabet == 1)
            freq[offset] += 1;
    }

    // If two characters occurred the same number of time then
    // print lowest ASCII value character.
    int max_index = 0;
    for(int i = 0;i < MAX_CHAR; i++)
    {
        if(freq[i] > freq[max_index])
            max_index = i;
    }
    int max_repeated_char = 'a' + max_index;
    cout << char(max_repeated_char) << endl;
    return 0;
}