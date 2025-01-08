class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int e = s.size() - 1;

        while (l < e) {
            // Skip non-alphanumeric characters
            if (!isalnum(s[l])) {
                l++;
            } else if (!isalnum(s[e])) {
                e--;
            } else {
                // Compare characters after converting to lowercase
                char t1 = tolower(s[l]);
                char t2 = tolower(s[e]);
                if (t1 != t2) return false;
                l++;
                e--;
            }
        }
        return true;
    }
};