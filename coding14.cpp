/*
Write a program to find smallest integer value b for a given value of a. If we multiply the digits of b, We should get exact value of a.

Result b must contain more than one digit.

Contraints:
1 <= a <= 10000

Example1:
Sample input:
10

Sample output:
25

25 --> 2 * 5 = 10

Example2:
Sample input:
100

Sample output:
455

455 --> 4 * 5 * 5 = 100
*/

/*
Approach:

1) B is formed by digits which can completely divide A.
2) Digits are from 0 to 9, but in this case we can't take 0 and forming number in B.
3) We will run a loop from i=9 to  i=2.
4) For every i we will divide A by it, until A can't be further divided by i.
5) After every successful division we will push value of i into stack.
6) If after end of loop our A=1, then we will form a no from digits which are present in stack.
7) If after end of loop our A!=1, then we will return -1 from function.

*/



#include <bits/stdc++.h>
using namespace std;

int helper(int A)
{
    /*if A value is less than 10 then B will be A + 10
    Such as if A=4 then our B will be 14
    But if we don't add this code segemnt then B will be 22 but it is wrong.*/
    if(A < 10)
    {
        return A+10;
    }

    stack<int> s;

    for(int i = 9; i>=2; i--)
    {
        while(A%i == 0)
        {
            s.push(i);
            A /= i;
        }
    }
    if(A != 1)
    {
        return -1;
    }

    int b = 0;
    while(!s.empty())
    {
        int x = s.top();
        s.pop();
        b = b*10 + x;
    }
    return b;
}

int main()
{
    int A;
    cin >> A;

    int B = helper(A);
    cout << B;
    return 0;
}


/*

Explanation

A = 100
from  i = 9 .... i = 5 yes divisible : Stack => 5
now A = 20
from i = 9 ..... i = 5 yes divisible : Stack => 55
now A = 4
from i = 9 ..... i = 4 yes divisible : Stack => 554
now A = 1
from i = 9 ... i = 2 => no any divisible found

pop the stack elements: 4 -> 5 -> 5 : B = 455

*/