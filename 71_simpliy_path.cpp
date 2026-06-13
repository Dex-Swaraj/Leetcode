class Solution {
public:
    string simplifyPath(string path) {
        char delimiter = '/';
        
        size_t start = 0;
        size_t end = path.find(delimiter);
        stack<string> stacky;

        while (end != std::string::npos) {
            string folder=path.substr(start, end - start);                
            start = end + 1; 
             if(folder=="." || folder=="")
              {
                 
              }
               else if(folder==".." )
              {
                if (!stacky.empty()) {
                stacky.pop();
                }
              }
              else
              {
                stacky.push(folder);
              }

            end = path.find(delimiter, start); 
        }
        

        
        string folder = path.substr(start);
        if (folder != "." && folder != "") {
            if (folder == "..") {
                if (!stacky.empty()) stacky.pop();
            } else {
                stacky.push(folder);
            }
        }
        

        string newstr="";
        while(!stacky.empty())
        {
              string top=stacky.top();
              stacky.pop();
              newstr="/" + top + newstr;
        }

        return  newstr.empty() ? "/" : newstr;
    }
};