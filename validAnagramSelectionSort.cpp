// LeetCode #242 - Valid Anagram
// My Selection Sort implementation (educational version)
// Time Complexity: O(n²)  Time Limit Exceeded on large inputs

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        //sort s
        for (int i = 0; i < s.length() - 1; i++){
            int minIndex = i;
            for(int j = i + 1; j < s.length(); j++){
                if (s[j] < s[minIndex]){
                    minIndex = j;
                }
            }
            if (minIndex != i){
                swap(s[i], s[minIndex]);
            }
        }
        
        //sort t
        for (int i = 0; i < t.length() - 1; i++){
            int minIndex = i;
            for(int j = i + 1; j < t.length(); j++){
                if (t[j] < t[minIndex]){
                    minIndex = j;
                }
            }
            if (minIndex != i){
                swap(t[i], t[minIndex]);
            }
        }
        
        return s == t;
    }
};
