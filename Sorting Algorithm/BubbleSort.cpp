#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size = 5;
    int nums[size] = {8,7,3,1,2};

    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-1-i; j++)
        {
            // if previous element is greater than current, then swap 
            if(nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j+1]);
            }
        }
    }

    // array print
    for(int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";
}