#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size = 5;
    int nums[size] = {8,7,3,1,2};

    for(int i = 0; i < size; i++)
    {
        // Let nums[i] is smallest number
        int small = i;
        for(int j = i+1; j < size; j++)
        {
            // select smallest number from i+1 to end
            if(nums[j] < nums[small])
                small = j;
        }
        // swap the element of ith number & smallest number
        int temp = nums[small];
        nums[small] = nums[i];
        nums[i] = temp;
    }

    // array print
    for(int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";
}