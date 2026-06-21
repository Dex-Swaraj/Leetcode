class Solution {
public:

 
vector<int> nextSmaller(vector<int>& arr)
{
    int n = arr.size();
    vector<int> nse(n,n);
    stack<int> st;

    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()] >= arr[i])
            st.pop();

        if(!st.empty())
            nse[i] = st.top();

        st.push(i);
    }

    return nse;
}


vector<int> previousSmaller(vector<int>& arr)
{
    int n = arr.size();
    vector<int> pse(n,-1);
    stack<int> st;

    for(int i=0;i<n;i++)
    {
        while(!st.empty() && arr[st.top()] > arr[i])
            st.pop();

        if(!st.empty())
            pse[i] = st.top();

        st.push(i);
    }

    return pse;
}

   int sumSubarrayMins(vector<int>& nums) {
    vector<int> nse = nextSmaller(nums);
    vector<int> pse = previousSmaller(nums);

    long long minSum = 0;
    const int MOD = 1e9 + 7;
    int n = nums.size();

    for(int i=0;i<n;i++)
    {


        long long leftMin = i - pse[i];
        long long rightMin = nse[i] - i;
          
        minSum = (minSum +
          1LL * nums[i] * leftMin % MOD * rightMin % MOD)
          % MOD;
    }

    return minSum;
    }
};