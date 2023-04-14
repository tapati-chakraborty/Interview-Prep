/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 |                          ___
3|           ___           |   |___     __
2|    __    |   |__      __|       |___|  |___
1|   |  |   |      |    |                     |
0|___|__|___|______|____|_____________________|
   0  1   0   2   1   0   1   3  2   1   2  1

left :   0 1 1 2 2 2 2 3 3 3 3 3

right :  3 3 3 3 3 3 3 3 2 2 2 1

         0 0 1 0 1 2 1 0 0 1 0 1

left = from left to right max height
right = from right to left max height
blocks of water stored in every index = min(left, right) - height of the building

total amount = sum(blocks of water stored in every index)

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[n];
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left[n];
    int right[n];
    int maxl = 0;
    int maxr = 0;

    for(int i = 0; i < n; i++)
    {
        maxl = max(arr[i], maxl);
        left[i] = maxl;
    }

    for(int i = n-1; i >= 0; i--)
    {
        maxr = max(arr[i], maxr);
        right[i] = maxr;
    }

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        count += min(left[i], right[i]) - arr[i];
        cout << count << endl;
    }

    return 0;
}