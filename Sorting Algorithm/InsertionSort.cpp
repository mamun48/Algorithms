#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size = 5;
    int nums[size] = {8,7,3,1,2};

    for(int i = 1; i < size; i++)
    {
        int j = i-1, current = nums[i];
        while(j >= 0 and nums[j] > current)
        {
            swap(nums[j], nums[j+1]);
            j--;
        }
        nums[j+1] = current;
    }

    // array print
    for(int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";
}