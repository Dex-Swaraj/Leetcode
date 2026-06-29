class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    int answer=0;


    std::sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[1] < b[1]; // Compare the 'end' values (index 1)
    });

    int last=intervals[0][1];
    for(int i=1;i<intervals.size();++i)
    {
         if(intervals[i][0]<last)
         {
                  answer++;
         }else
        {
              last=intervals[i][1];
        }
    }  
     return answer;
    }
};

   
