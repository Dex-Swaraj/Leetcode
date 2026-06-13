class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stacky;
        for (int i = 0; i < tokens.size(); ++i) {
            string token = tokens[i];
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int num1 = stacky.top(); 
                stacky.pop();
                int num2 = stacky.top();
                stacky.pop();

             
                if (token == "+") {
                    stacky.push(num2 + num1);
                } else if (token == "-") {
                    stacky.push(num2 - num1);
                } else if (token == "/") {
                    stacky.push(num2 / num1);
                } else if (token == "*") {
                    stacky.push(num2 * num1);
                }
            } else {

                stacky.push(stoi(token));
            }

        }
              return stacky.top();
 
        

    }
    
};