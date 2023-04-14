/*
Given a square matrix, calculate the absolute difference between the sums of its diagonals.
     1 2 3
     4 5 6
     9 8 9
The left-to-right diagonal = 1+5+9 = 15, the right-to-left diagonal = 3+5+9 = 17, their absolute difference is | 15-17 | = 2

Sample input:
3
11 2 4
4  5 6
10 8 -12

Sample output:
15

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][n];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin >> arr[i][j];
        }
    }

    int suml = 0;  //sum of left-to-right diagonal elements
    int sumr = 0;  //sum of right-to-left diagonal elements

    int i = 0, j = 0;
    while(i != n && j != n)
    {
        suml += arr[i][j];
        i++;
        j++;
    }

    i = 0;
    j = n-1;
    while(i != n && j>=0)
    {
        sumr += arr[i][j];
        i++;
        j--;
    }

    cout << abs(suml - sumr);
    return 0;

}

/*
Explanation:

1 2 3
4 5 6
9 8 9
1 = arr[0][0]
5 = arr[1][1]
9 = arr[2][2]
hence, for suml we have to run the loop n-1 times and when i and j value are same we take the element and add them.

3 = arr[0][2]
5 = arr[1][1]
9 = arr[2][0]
here, for sum r we have to run the loop until i becomes n-1(increasing) and j becomes 0 (decresing)

*/