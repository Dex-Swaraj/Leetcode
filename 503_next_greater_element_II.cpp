class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums1) {
      
      stack<int> stk;
       int size=nums1.size();
       vector<int> ans(size,-1);
      
       for(int i=2*size-1;i>=0;i--)
       {
        while(!stk.empty() && stk.top()<=nums1[i%size])
        {
            stk.pop();
        }
        if(i<size)
        {
                ans[i]=stk.empty()?-1:stk.top();
        }
        stk.push(nums1[i%size]);
       }

        return ans;
     
 
    }
       
};