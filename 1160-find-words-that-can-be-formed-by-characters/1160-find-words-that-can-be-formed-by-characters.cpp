class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       
        vector<int> charCounts(26, 0);
        for (char c : chars) {
            charCounts[c - 'a']++;
        }
        
        int totalLength = 0;
        
       
        for (const string& word : words) {
            vector<int> wordCounts(26, 0);
            bool canForm = true;
            
            for (char c : word) {
                wordCounts[c - 'a']++;
                
                if (wordCounts[c - 'a'] > charCounts[c - 'a']) {
                    canForm = false;
                    break; // Early exit for this word
                }
            }
            
           
            if (canForm) {
                totalLength += word.length();
            }
        }
        
        return totalLength;
    }
};