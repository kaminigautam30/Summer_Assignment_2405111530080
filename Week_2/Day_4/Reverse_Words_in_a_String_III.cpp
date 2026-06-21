class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;

        while(i < n) {
            while( i < n && s[i] ==' ')
                 i++;
            int start = i;

            while(i < n && s[i] != ' ')
                 i++;
            int end = i - 1;

            reverse(s.begin() + start, s.begin() + end + 1);
        }
        return s;
    }
};
