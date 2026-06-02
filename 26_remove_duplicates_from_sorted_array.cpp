// so we are given to rmeote duplicate elements of array 
// in place no extra size can be used
// aray is in non decreasing order
// array is sorted 


// need to return count of unique elements 



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();++j)
        {
            if(nums[i] != nums[j])
            {
                nums[i+1]=nums[j];
                i++;
            }
            
        }
        return i+1;
       
    }
};