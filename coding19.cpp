/*
Input a 2D matrix, print all elements in spiral format(clockwise)

input:
1 2 3
4 5 6
7 8 9

output:
1 2 3 6 9 8 7 4 5

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, arr[m][n];
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sr = 0;
    int er = n-1;

    int sc = 0;
    int ec = m-1;

    int i = 0;
    while(i < n*m)
    {
        //printing starting row
        for(int j = sc; j <= ec; j++)
        {
            cout << arr[sr][j] << " ";
            i++;
        }
        sr++;

        if(i == n*m)
            break;

        //printing ending column
        for(int j = sr; j <= er; j++)
        {
            cout << arr[j][ec] << " ";
            i++;
        }
        ec--;

        if(i == n*m)
            break;

        //printing ending row
        for(int j = ec; j >= sc; j--)
        {
            cout << arr[er][j] << " ";
            i++;
        }
        er--;

        if(i == n*m)
            break;

        //printing startig column
        for(int j = er; j <= sr; j++)
        {
            cout << arr[j][sc] << " ";
            i++;
        }
        sc++;

        if(i == n*m)
            break;
    }

    return 0;
}

//*** segmentation fault is occuring have to check later ***