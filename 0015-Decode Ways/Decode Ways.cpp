class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if(n == 1) return s[0] != '0';
        vector<int> dp(n);
        dp[n-1] = (s[n-1] != '0');
        if(s[n-2] == '0') dp[n-2] = 0;
        else {
            if(stoi(s.substr(n-2, 2)) <= 26) dp[n-2] = dp[n-1] + 1;
            else dp[n-2] = dp[n-1];
        }

        for(int i = n-3; i >= 0; i--) {
            if(s[i] == '0') dp[i] = 0;
            else if(stoi(s.substr(i, 2)) <= 26 && stoi(s.substr(i, 2)) >= 10) dp[i] = dp[i+1] + dp[i+2];
            else dp[i] = dp[i+1];
        }

        return dp[0];
    }
};