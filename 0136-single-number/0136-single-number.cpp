class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result =0;
        for(int number : nums){
            result=result^number;
        }
        return result;
    }
};