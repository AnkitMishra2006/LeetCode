class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int freq[26];
        for(int i = 0; i < s1.length(); i++)
        {
            freq[s[i] - 'a']++;
        }
        int windSize = s1.length();
        for(int i = 0; i < s2.length(); i++)
        {
            int windIdx = 0, idx = i;
        }
    }
};