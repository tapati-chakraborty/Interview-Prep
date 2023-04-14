/*
Write a program to reverse a string without using inbuilt string reverse library fuctions
*/

#include <bits/stdc++.h>

using namespace std;

void reverseArray(char arr[], int start, int end)
{
    while(start < end)
    {
        int temp  = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }
    printf("%s",arr);
}

int main()
{
    char arr[20];
    scanf("%s",arr);
    int l = strlen(arr) - 1;
    reverseArray(arr, 0, l);
    return 0;
}