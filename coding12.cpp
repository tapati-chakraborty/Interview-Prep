/*
A coding competition was conducted in company with e employees.Data od employees who participated and who did not participate in the competition is available. There were three problems in the coding competition. Data as mentioned below is available

The number of employees who have solved only the first, only the second and only the third problem are equal.

p1 employees who solved the first,second problem.
p2 employees who solved the second,third problem.
p3 employees who solved the third,first problem.
q employees who solved all the 3 problem.
r employees who did not participate in competition.

ans the following ques based on the data.
How many employees have solved the first problem ?
How many employees have solved exactly one of the 3 problems ?

Contraints:
0 <= p1,p2,p3 < 10^5
p1,p2,p3 <= e
r,q < e
q < p1, p2, p3

Sample input:
30
26
28
14
345
43
Sample output:
126
246
*/


#include <bits/stdc++.h>
using namespace std;

void helper(int p1,int p2,int p3,int e, int q, int r)
{
    int second = e - r +2*q - p1 - p2 - p3;
    int x = second / 3;

    int first = x + p1 - q + q + p3 - q;
    cout << first << endl;
    cout << second << endl;

}

int main()
{
    int p1, p2, p3, q, e, r;
    cin >> p1 >> p2 >> p3 >> q >> e >> r;
    helper(p1, p2, p3, e, q, r);
    return 0;
}

/*
Explanation:
draw thr venn diagram

formula:
those who have partipated in the competition,
x + p1 - q +x + p2 - q + x + p3 - q + q = E - r
3x - 2q + p1 + p2 + p3 = E - r
3x = E- r +2q - p1 - p2 - p3

3x = 345 - 43 + 28 - 30 - 26 - 28
3x = 246 : who have solved exactly one of the 3 problem

x = 82

now, Q1 = 82 + p1 + (p3 - r) = 82 + 30 + 14 = 126 : who have solved the first problem
*/