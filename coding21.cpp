/*
Numbers are everywhere around us. We deal with different types of numbers on a daily basis. There are real numbers, whole nos, natural nos etc. Another kind of nos is called strange nos, which has the following properties:

* A strange no is an integer no 'N' which has factors that are prime numbers.
* The square root of the number 'N' should be less than the greatest prime factor of 'N'.

The task here is to find out if the given number 'N' is "Strange" or "Not strange"

Example:

input:
15- value of N

output:
Strange

input:
25

output:
Not Strange
*/

/*
15 = 3 * 5
sqrt(15) = 3.9 < 5 : strange

1. all the prime factors
2. greatest prime factor
3. compare with sq N

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    float sqt = sqrt(n*1.0);
    int maxp = 0;
    int prime = 2;

    while(n > 1)
    {
        if(n%prime == 0)
        {
            n /= prime;
            maxp = max(maxp, prime);
        }
        else
        {
            prime ++;
        }
    }

    if(sqt < maxp)
        cout << "Strange";
    else
        cout << "Not strange";

    return 0;
}