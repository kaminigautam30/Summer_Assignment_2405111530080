class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strstack;

        string curr = "";
        int num = 0;

        for(char c : s) {
            if(isdigit(c)) {
                num = num * 10 + (c - '0');
            } else if (c == '[') {
                numStack.push(num);
                strstack.push(curr);

                num = 0;
                curr = "";
            } else if( c ==']') {
                int k = numStack.top(); numStack.pop();
                string prev = strstack.top(); strstack.pop();

                string temp = "";
                for(int i = 0; i < k; i++) {
                    temp += curr;
                }
                curr = prev + temp;
            } else{
                curr += c;
            }
        }
        return curr;
    }
};
