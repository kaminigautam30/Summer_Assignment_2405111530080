class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if( s1.size() > s2.size())
           return false;

        vector <int> count(26,0);

        for(char c: s1) {
            count[c - 'a']++;
        }
        int left = 0, right = 0;
        int need = s1.size();

        while (right <s2.size()) {
            if(count[s2[right] - 'a'] > 0) {
                need--;
            }
            count[s2[right] - 'a']--;
            right++;

            if(right - left> s1.size()) {
                if(count[s2[left] - 'a'] >= 0) {
                   need++;
                }
                count[s2[left] - 'a']++;
                left++;
            }
            if(need == 0)
              return true;
        }
        return false;
    }
};
       
