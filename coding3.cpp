/*
MS Excel columns have a pattern like A,B,C,....,Z,AA,AB,AC,....,AZ,BA,BB,...,BZ,AAA,AAB,....ETC.In other words, column 1 is named as "A",column 2 as "B", column 27 as "AA".
Given a column number, find its corresponding Excel column name. The following are more examples.

INPUT     OUTPUT
26        Z
51        AY
52        AZ
80        CB
676       YZ
702       ZZ
705       AAC
*/
#include <bits/stdc++.h>
using namespace std;

void reverseArray(char arr[], int start, int end)
{
    while(start < end)
    {
        int temp  = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }
}

void printString(int n)
{
    char str[50];
    int i = 0;
    while (n > 0) {
        int rem = n % 26;

        if(rem == 0) {
            str[i] = 'Z';
            i++;
            n = (n/26) - 1;
        }
        else {
            str[i] = (rem - 1) + 'A';
            i++;
            n = n / 26;
        }
    }
    str[i] = '\0';
    reverseArray(str, 0, strlen(str)-1);
    printf("%s",str);
    return;
}

int main()
{
    int n;
    scanf("%d",&n);
    printString(n);
    return 0;
}


/*
Explanation:
alphabets = 26
n%26 = 0 -----> Z
n/26 = ans - 1 :
if = 0 then stop
else = ascii value of that no and add to te array

n = 26
26%26 = 0 ----> Z
26/26 = 0 ----> Z
reverse : Z

n = 52
52%26 = 0 -----> Z
52/26 = 2 - 1 = 1 ----> ZA
reverse : AZ

n = 80
80%26 = 2 ----> B
80/26 = 3 - 1 = 2 ----> BC
reverse : CB

*/