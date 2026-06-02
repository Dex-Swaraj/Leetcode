class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int max;
      int count=0;
      for(int i=0;i<nums.size();++i)
      {
         if(count==0)
        {
           count+=1;
           max=nums[i]; 
        }else if(nums[i]==max)
            count++;
         else
            count--;
      }
      count=0;
      for(int i=0;i<nums.size();++i)
      {
        if(max==nums[i])
        {
            count++;
        }

      }

      if(count>nums.size()/2)
         return max;
     
     return -1;
        

            
      }
    
};