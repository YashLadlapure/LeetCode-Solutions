class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int len = 0;

        // 1) Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // 2) Count characters of the last word
        while (i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};