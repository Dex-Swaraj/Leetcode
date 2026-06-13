class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for (char ch : s) {

            //  Opening brackets → push
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            }
            //  Closing brackets
            else {
                // stack empty → no opening to match
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                // 3 Check correct matching
                if ((ch == ')' && top != '(') ||
                    (ch == ']' && top != '[') ||
                    (ch == '}' && top != '{')) {
                    return false;
                }
            }
        }

        //  Stack must be empty at end
                    return st.empty();
                }
    };
          
           

        
