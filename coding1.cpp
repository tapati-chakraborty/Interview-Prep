/*
Given two positive integers N and X, where N is the number of total patients and X is the time duration(in mins) after which a new patient arrives. Also, doctors will give only 10 mins to each patient.The task is to calculate the time(in mins) the last patient needs to wait.

INPUT:
The input denote the total no of patients N and the time interval X(in mins)in which the next patients are visiting.

OUTPUT:
Output the waiting time of last patient.

Public test cases:

input 4 5
output 15

input 5 3
output 28
*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, X;
    int WaitingTime = 0;
    cin >> N >> X;
    WaitingTime = (10 - X) * (N - 1);
    cout << WaitingTime << endl;
    return 0;
}

/*
Explanation:
4 patients
5 mins later new patient came

for N = 1: t = 0  t=0 to t=10  wt=0
for N = 2: t = 5  t=10 to t=20 wt=5
for N = 3: t = 10  t=20 to t=30 wt=10
for N = 4: t = 15  t=30 to t=40 wt=15 ----> our ans.

5 multiples --> 5*3  -->(10-X) * (N-1)

*/