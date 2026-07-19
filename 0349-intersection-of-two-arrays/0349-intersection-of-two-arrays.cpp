#include <vector>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        bool hash1[1001] = {false};
        bool hash2[1001] = {false};
        
        for (int num : nums1) {
            hash1[num] = true;
        }
        
        for (int num : nums2) {
            hash2[num] = true;
        }
        
        vector<int> result;
        for (int i = 0; i <= 1000; ++i) {
            if (hash1[i] && hash2[i]) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};