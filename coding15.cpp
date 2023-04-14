/*
A plumber wants to check whether a pipe junction where N incoming pipes and M outgoing pipes are balanced, and, if not, needs to balance the junction by adding an input pipe or an output pipe of a suitable capacity. At junction, there are a set of input pipes and a set of output pipes.Each pipe has  a rated capacity and an actual capacity. The actual capacity for each pipe is lower than the rated capacity bya a constant R, the "rust factor", which depends on the material of the pipe, and is the same for all the pipes at the junction.

for example, if the rated capacity is 65, and R is 2, the actual capacity is 63.

A junction is balanced if the sum of actual capacities of the input pipes is the same as the sum of the actual capacities of the output pipes. If it is not balanced, the plumber needs to add one input pipe or one output pipe to balance the junction, and determine the rated capacity of that added pipe.

Here we have N incoming pipes and M outgoing pipes. the incoming pipes may be of different rated capacities. Similarly, the outgoing pipes may also be of different rated capacites.

Find the rated capacity of the pipe required to make the junction balanced. If the combined actual capacity of the incoming pipes is more than the combined actual capacity of the outgoing pipes then the plumber will need to add an outgoing pipe. Conversely, if the combined actual capacity of the incoming pipe is less than the combined actual capacity of the outgoing pipes then the plumber will need to add an incoming pipe.

If an outgoing pipe is added then denote its rated capacity as a negative no. If an incoming pipe is added then denote its rated capacity as a positive no.

Input :

The input has three lines.

the first line contains three space seperated integers N M R denoting the no of incoming pipes, outgoing pipes and rust factor respectively.

the second line contains N space separated integers denoting the rated capacity of each incoming pipe.

the third line contains M space separated integers denoting the rated capacity of each outgoing pipe

Output:

Print the rated capacity of the pipe required to balance the junction OR print "BALANCED" if the junction is already balanced.

Example:
Input:
3 3 2
85 75 95
70 80 45

output:
-62


Example:
input:
5 6 1
10 26 33 40 50
20 7 53 23 45 10

output:
BALANCED

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, r;
    cin >> n >> m >> r;

    int in[n], out[m];

    for(int i = 0; i < n; i ++)
    {
        cin >> in[i];
    }

    for(int i = 0; i < n; i ++)
    {
        cin >> out[i];
    }

    int sumi = 0;
    int sumo = 0;

    for(int i = 0; i < n; i ++)
    {
        sumi += in[i] - r;
    }

    for(int i = 0; i < n; i ++)
    {
        sumo += out[i] - r;
    }

    if(sumi == sumo)
    {
        cout << "BALANCED" << endl;
        return 0;
    }

    if(sumi > sumo)
    {
        int diff = sumi - sumo + r;
        cout << -1*diff;
        return 0;
    }

    if(sumo > sumi)
    {
        int diff = sumo - sumi + r;
        cout << diff;
        return 0;
    }

    return 0;
}

/*
Explanation:

incoming total capacity: 83+73+93 = 249
outgoing total capacity: 68+78+43 = 189
incoming is more outgoing is less, then we have to add another outgoing pipe of capacity,
249 - 189 = 60
adding rust factor, 60 + 2 = 62
as it is outging so the ans will be -62.

*/