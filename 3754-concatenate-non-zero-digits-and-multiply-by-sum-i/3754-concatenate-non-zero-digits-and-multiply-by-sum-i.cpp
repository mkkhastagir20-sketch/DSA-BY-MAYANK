class Solution {
public:
    long long sumAndMultiply(int n) {
        string original_text=to_string(n);
        string non_zero_text="";
        long long total_sum=0;
        for(char digits : original_text){
         if(digits !='0'){ 
            non_zero_text+=digits;
            total_sum+=(digits-'0');
            }
            if(non_zero_text==""){
                return 0;
            }
        }
        long long x = stoll(non_zero_text);
        return (x*total_sum);



    }
};