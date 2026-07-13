class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        sort(strs.begin(), strs.end());
        
        string first = strs.front();
        string last = strs.back();
        string ans = "";
        
        for (size_t i = 0; i < min(first.length(), last.length()); ++i) {
            if (first[i] != last[i]) {
                break;
            }
            ans += first[i];
        }
        
        return ans;
    }
};

