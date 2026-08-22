class Solution {
public:
    bool checkDivisibility(int n) {
        int original =n;
        int digitsum =0;
        int digitproduct =1;
        while(n>0){
            int extract = n%10;
            digitsum+=extract;
            digitproduct= digitproduct*extract;
            n=n/10;
}
    int sum = digitsum+digitproduct;
    if(original%sum ==0){
        return true;
    }
    else {
        return false;
    }
    }
};