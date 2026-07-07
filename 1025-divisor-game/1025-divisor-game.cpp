class Solution {
public:
    bool divisorGame(int n) {
        if(n<=1) return false;
       for(int i=1; i<n;i++)  {
         return !divisorGame(n-i);
         }
         return false;
            }
};