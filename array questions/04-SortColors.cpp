class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;

        while (mid <= high)
        {

            if (nums[mid] == 0)
            {
                swap(nums[low++], nums[mid++]);
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else if (nums[mid] == 2)
            {
                swap(nums[mid], nums[high--]);
            }
        }
    }
};

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int low = 0;
//         int high = nums.size()-1;
//         int mid = 0;

//         while(mid<=high){

//             switch(nums[mid]){
//                 case 0: swap(nums[low++],nums[mid++]);
//                         break;

//                 case 1: mid++;
//                         break;

//                 case 2: swap(nums[mid],nums[high--]);
//                         break;
//             }
//         }
//     }
// };