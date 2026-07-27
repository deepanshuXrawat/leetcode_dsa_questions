class Solution {
public:
    string reverseOnlyLetters(string s) {

        // start and end of the string
        int start = 0;
        int end = s.length() - 1;

        while (start < end) {

            // check if start is character
            while (start < end && !isalpha(s[start])) {
                ++start;
            }

            // check if end is character
            while (start < end && !isalpha(s[end])) {
                --end;
            }

            // if both characters, then swap
            if (start < end) {
                swap(s[start], s[end]);
                ++start;
                --end;
            }
        }

        return s;
    }
};