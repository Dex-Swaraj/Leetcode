class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        int maxreach = 0;
        for(int i=0;i<=n;++i)
        {
            if(i>maxreach)
              return false;
            maxreach=max(nums[i]+i,maxreach);
             
        }
        return true;
    }
};