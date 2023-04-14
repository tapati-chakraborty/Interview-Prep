/*
Lohia, Gosu and Prince are footballers. Lohia and gosua are strikers while Prince is a goalkeeper. You as the coach held a practice session of penalty shootouts to improve the performance of the strikers.Your task is to find the maximum goal scorer between the two.
Lohia, Gosu and Prince energy is denoted by X, Y and Z respectively.For every goal scored the energy of the respective player is decresed by 1 and after every save Prince energy is decresed by 1. Strikers will be able to score the goal if Prince energy is a factor of their energy otherwise not.
The session ends when Prince's energy reaches 1.
Assume same player can try for goals repeatedly and they both try to increase number of goals in totality. Lohia being a junior player is always favoured for penalty kick.

INPUT:
The first line of input contains an integer T denoting the number of test cases. Each test case contains energy 3 integers X, Y & Z, denoting the energies respectively.

OUTPUT:
For each test case print the number of goals scored by Lohia and Gosu respectively.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    int count1 = 0, count2 = 0;
    cin >> x >> y >> z;

    while(z != 1)
    {
        if(x % z == 0)
        {
            x--;
            count1++;
        }
        else if(y % z == 0)
        {
            y--;
            count2++;
        }
        else
            z--;
    }

    cout << count1 << " " << count2 << endl;
    return 0;

}

/*
Explanation:
Let Lohia's energy: x = 14
Gosu's energy: y = 8
Prince's energy: z = 5


*/