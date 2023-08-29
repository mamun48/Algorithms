#include <bits/stdc++.h>

using namespace std;

void cycleSort(vector<int> &nums, int start, int end)
{
    while (start < end)
    {
        // at i-th index it's value must be i+1
        if (nums[start] != start + 1) // if i-th position value is not correct
        {
            int val = nums[start];
            swap(nums[start], nums[val - 1]); // Replace nums[i] to it's correct postion
        }
        else         // if i-th position value is correct
            start++; // Move to the next index
    }
}

int main()
{
    int size;
    cin >> size;
    vector<int> nums(size);

    for (int i = 0; i < size; i++)
        cin >> nums[i];

    cycleSort(nums, 0, nums.size());

    return 0;
}