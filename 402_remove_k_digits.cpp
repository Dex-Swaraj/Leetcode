class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> stackme;
        string ans;
        for(int i=0;i<num.size();++i)
        {
             while(!stackme.empty() && stackme.top()>(num[i] - '0') && k > 0)
             {
                stackme.pop();
                k-=1;
             }
              stackme.push(num[i] - '0');
        }
        
        while(k>0)
        { 
          stackme.pop();
          k--;
        }
        
        while(!stackme.empty())
         {
            ans += (stackme.top() + '0');
            stackme.pop();
        }
        reverse(ans.begin(), ans.end());
        
        if(ans.empty())
            return "0";

        int count=0;
        int i=0;
        while(i < ans.size() && ans[i] == '0')
        {
             if(ans[i]=='0')
             {
                count++;
             }
             i+=1;
        }
        
        
        ans.erase(0, count); 
        if(ans.empty())
            return "0";
            
        return ans;  
    }
     
};
