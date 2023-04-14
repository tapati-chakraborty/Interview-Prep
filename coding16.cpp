/*
You are given the sources of a football league among a set of teams. You need to find the winner of the league and print the names of winner and points earned by the team.Each team gets 3 points for a win, 1 point for a draw and 0 for a loss. The name of the teams is represented as uppercase character viz. A B .... Z.

Constraints:
There will only be one team which gets the highest points

Input:
There are many lines in the input.

The first line constrains an integer, N, respecting number of teams in the league. The next (N*(N-1))/2 lines contains three separated strings <Team1, team2, Score>

here, Team1 is the name of the home team.
Team2 is the name of the away team.
Score represents the score of the match, (M-N), where M represents the score of the home team and N represents the score of the away teamm.

Output:
The output should have two lines.
the first line contain a character representing the name of the leader team.
the second line containing an integer representing the points won by the leader team.

Example:

input:
3
A B 2-1
B C 5-6
C A 2-1

output:
C
6
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int teams;
    cin >> teams;

    string str;
    getline(cin,str);

    int scores[teams];

    for(int i = 0;i < (teams*(teams-1))/2; i++)
    {
        string matchinfo;
        getline(cin, matchinfo);

        char home = matchinfo[0];
        char away = matchinfo[2];

        string scorehome = "";
        string scoreaway = "";

        int j = 4;
        while (matchinfo[j]!='-')
        {
            scorehome += matchinfo[j];
            j++;
        }
        int x = stoi(scorehome);
        j++;
        while (j < matchinfo.length())
        {
            scoreaway += matchinfo[j];
            j++;
        }
        int y = stoi(scoreaway);

        if(x<y)
        {
            scores[away-'A'] += 3;
        }
        else if(x == y)
        {
            scores[away-'A'] += 1;
            scores[home-'A'] += 1;
        }
        else{
            scores[home-'A'] += 3;
        }
    }

    int index = -1;
    int maxv = INT_MIN;

    for(int i = 0;i<teams; i++)
    {
        if(scores[i]>maxv)
        {
            maxv = scores[i];
            index = i;
        }
    }

    cout << char('A'+index);
    return 0;
}

/*
Explaination:
A has won 1 match : 3 points
B has won 0 match : 0 points
C has won 2 match : 6 points

*/