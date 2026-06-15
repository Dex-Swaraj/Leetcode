class MinStack {
    stack<long long> st;
    long long minVal;

public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            minVal = val;
        } 
        else if (val >= minVal) {
            st.push(val);
        } 
        else {

            st.push(2LL * val - minVal);
            minVal = val;
        }
    }

    void pop() {
        long long top = st.top();
        st.pop();

        if (top < minVal) {
            // decode previous min
            minVal = 2 * minVal - top;
        }
    }

    int top() {
        long long top = st.top();
        if (top < minVal)
            return minVal;
        return top;
    }

    int getMin() {
        return minVal;
    }
};
