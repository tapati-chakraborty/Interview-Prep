/*
Given an unsorted array arr of nonnegative integers and an integer sum, find a continuous subarray which adds to a given sum. There may be more than one subarrays with sum as the given sum, print first such subarray.
Examples :


    Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
    Output: Sum found between indexes 2 and 4
    Sum of elements between indices 2 and 4 is 20 + 3 + 10 = 33



    Input: arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7
    Output: Sum found between indexes 1 and 4
    Sum of elements between indices 1 and 4 is 4 + 0 + 0 + 3 = 7
*/


#include <iostream>

using namespace std;

void subArraySum(int arr[], int n, int sum)
{
    int start = 0, curr_sum = arr[0];
    for (int i = 1; i <= n; i++)
    {
        /*if curr_sum become more than given sum then remove
        the first element and increment the start index*/
        while (curr_sum > sum && start < i-1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        /*if curr_sum matches with given sum print the index*/
        if(curr_sum == sum)
        {
            cout << "index found from " << start << "to " << i-1 << endl;
            return;
        }

        //add element to curr_sum
        if(i < n)
        {
            curr_sum = curr_sum + arr[i];
        }
    }
    cout << "No subarray found" << endl;

}

int main()
{
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 23;

    subArraySum(arr, n, sum);

    return 0;
}


/*

Time complexity: O(n)
Space Complexity: O(1)

*/