#include <vector>

class NumArray {
private:
    int* prefixSums;

public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefixSums = new int[n + 1];
        prefixSums[0] = 0;
        for (int i = 0; i < n; ++i) {
            prefixSums[i + 1] = prefixSums[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSums[right + 1] - prefixSums[left];
    }

    ~NumArray() {
        delete[] prefixSums;
    }
};