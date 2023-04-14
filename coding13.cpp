/*
In network marketing a person who sells some merchandise becomes the root node of a so-colled network marketing tree. When the first person inducts someone into the network marketing tree. When the first person becomes the supervisor. Likewise, if this new recruit inducts a third person into the network marketing tree the new recruit becomes supervisor of the third person. The tree grows so on and so forth.

Whenever anybody in the network marketing tree makes a profit, they have to pass a certain percentage of that profit to thair supervisor. The percentage of the profit passed to the superior will be rounded to the nearest integer, and hence will always be an integer at each level. Calculate the profit of the person at the root of the network marketing tree coming from a particular individual at Nth level in the tree.

Constraints:
1 < N < 20
0 < M < 10^8
0 < P <= 50

Input:
the input has three lines, each with one integer.

The first line contains an integer N, which determines the height of the network marketing tree
The second line contains an integer M, which denotes the profit earned by a particular individual at Nth level
The third line contains an integer p, which denotes profit % that needs to be passed on to supervisor. Each supervisor will always get an integer amount of the profit from his subordinate.

Output:
The profit earned by the person at the root of the network marketting tree coming from a particular individual at Nth level in the tree, rounded off to the nearest integer.

Input:
3
100
10
Output:
1
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m;
    cin >> m;

    int p; //percentage of the profitiint
    cin >> p;

    int i = 0;
    while(i < n-1)
    {
        m = (p * m)/100;
        i++;
    }

    cout << m;
    return 0;


}

/*
Explanation:
We are given N = 3, M = 100 and P = 10
The person is at 3rd level of hierarchy earned 100 as profit.
The person at 2nd level will get P% of profit of person at 3rd level
which is which is 10% of 100 = 10
the person at level 1st level will earn P% of profit of person at 2nd level.
which is 10% of 10 = 1.
so, the output is 1.
*/