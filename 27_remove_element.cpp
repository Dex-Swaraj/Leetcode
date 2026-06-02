class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int right=nums.size()-1;
        int left=0;

        while(left<=right)
        {
            if(nums[left]==val)
            {
                 swap(nums[left],nums[right]);
                 right--;
                 if(nums[left]!=val)
                     left++;
            }else
             left++;         
            
        }
          
        return left;
    }
};