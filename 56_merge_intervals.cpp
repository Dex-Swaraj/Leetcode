class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int size=arr.size();
        vector<vector<int>>ans;
        std::sort(arr.begin(), arr.end());
        for(int i=0;i<size;++i)
        {
        if(ans.empty()||arr[i][0]>ans.back()[1])
        {
            ans.push_back(arr[i]);
        }else
        {
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
        }
        return ans;
        

    }
};