/*
You are given a square 2D matrix representing an image, rotate the image by 90 degrees(clockwise).

You have to rotate the image in place, which means you have to modify the input 2D matrix directy. Do not allocate another 2D matrix and do therotation.

1 2 3           7 4 1
4 5 6    =>>    8 5 2
7 8 9           9 6 3
*/

/*

Approach:
1 2 3                       1 4 7                           7 4 1
4 5 6     ----transpose-->  2 5 8  ---reverse each row-->   8 5 2
7 8 9                       3 6 9                           9 6 3

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    //transpose

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    //reverse each row

    for(int i = 0; i < n; i++)
    {
        int s = 0;
        int e = n-1;

        while(s <= e)
        {
            swap(arr[i][s], arr[i][e]);
            s++;
            e--;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j];
            cout << " ";
        }
        cout << endl;
    }
}