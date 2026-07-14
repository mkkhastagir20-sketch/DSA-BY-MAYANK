class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);
        
        if (k == 0) {
            return res;
        }
        
        int left = 1;
        int right = k;
        int sum = 0;
        
        if (k < 0) {
            k = -k;
            left = n - k;
            right = n - 1;
        }
        
        for (int i = left; i <= right; ++i) {
            sum += code[i % n];
        }
        
        for (int i = 0; i < n; ++i) {
            res[i] = sum;
            sum -= code[(left + i) % n];
            sum += code[(right + i + 1) % n];
        }
        
        return res;
    }
};