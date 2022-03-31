/*
Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4

Example 2:

Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9
*/

#include <iostream>

using namespace std;

int missingNum(int arr[], int n)
{
    int sum = 0;
    int total = ((n+1)*(n+2))/2;
    for (int i = 0; i < n; i++)
        sum = sum + arr[i];

    int num = total - sum;
    return num;
}


int main()
{
    int arr[] = { 1, 2, 4, 5, 6 };
    int miss;

    int n = sizeof(arr)/sizeof(arr[0]);

    int missingNo = missingNum(arr, n);

    cout << missingNo << endl;
    return 0;
}

/*

Time complexity: O(n)
Space complexity:O(1)
*/