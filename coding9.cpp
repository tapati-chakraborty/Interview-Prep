/*
Given an array and a number (say s), find whether any two elements in the array whose sum is “s”
*/

#include <bits/stdc++.h>

using namespace std;

void check_sum_and_display(int arr[], int size, int sum)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = i+1; j < size; ++j)
        {
            if(sum == arr[i] + arr[j]){
                cout << arr[i] << " " << arr[j] << endl;
                exit(0);
            }

        }
    }
    cout << "No-match" << endl;
}


int main()
{
    int size, arr[50], s;
    cin >> size;
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    //now time to take input the sum
    cin >> s;
    check_sum_and_display(arr, size, s);
    return 0;
}