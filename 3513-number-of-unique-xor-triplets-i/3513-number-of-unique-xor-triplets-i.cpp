class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
    
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;

    }
    int bits=0;
    while(n){
        bits++;
        n>>=1;
    }
        return pow(2,bits);
    }
};