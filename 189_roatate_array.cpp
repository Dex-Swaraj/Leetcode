class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n = nums.size();
        if (n == 0 || k % n == 0) { 
            return;
        }
        k %= n; // Handle k larger than n

        vector<int> temp(n);
        for (int i = 0; i < n; ++i) {
            temp[(i + k) % n] = nums[i]; // Place nums[i] at its new rotated position
        }
        nums = temp; // Copy back to original array
    }
};

  