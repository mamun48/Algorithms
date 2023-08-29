#include<bits/stdc++.h>
using namespace std;


class Solution
{
  public:
    int partition(vector<int> &nums, int low, int high){
        int mid = (low+high)/2;
        int pivot = nums[mid];
        swap(nums[mid], nums[high]);
        int pi = low;
        for(int i=low; i<high; i++){
            if(nums[i]<=pivot){
                swap(nums[i], nums[pi]);
                pi++;
            }
        }
        swap(nums[pi], nums[high]);
        return pi;
    }

    void quickSort(vector<int> &nums, int low, int high)
    {
        if(low<high){
            int pidx = partition(nums, low, high);

            quickSort(nums, low, pidx-1);
            quickSort(nums, pidx+1, high);
        }
    }

    vector<int> sortArray(vector<int> &nums)
    {
       quickSort(nums, 0, nums.size()-1);
       return nums;
    }
};

int main()
{
    int n; 
    cin>>n;
    vector<int>inp(n);
    for(int i = 0; i < n; i++) cin>>inp[i];
    Solution merge = Solution();
    merge.sortArray(inp);

}