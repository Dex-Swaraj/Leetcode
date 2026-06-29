class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int change5=0;
        int change10=0;
        for(int i=0;i<bills.size();++i )
        {
              if(bills[i]==5)
              {
                 change5+=1;
                 continue ;
              } 
              else if(bills[i]==10)
              {
                change5-=1; 
                if(change5 <0)
                    return false;
                 change10+=1;   
              } else 
              {
                 if(change10> 0 && change5 > 0)
                 {
                    change10-=1;
                    change5-=1;
                 }  
                 else if(change5 >= 3)
                 {
                       change5-=3;
                 }else
                    return false;
                   
              }
        }
        return true;
    }
};