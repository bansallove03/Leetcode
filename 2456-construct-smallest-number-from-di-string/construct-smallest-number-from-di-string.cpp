class Solution {
public:
    string smallestNumber(string pattern) {
        string s = "";
        for (int i = 1; i <= pattern.size() + 1; i++) {
            s.push_back('0' + i); 
        }

        int idx = -1; 
        for (int i = 0; i < pattern.size(); i++) {
            if (pattern[i] == 'D') {
                if (idx == -1) idx = i; 
            } else {  
                if (idx != -1) {  
                   
                    reverse(s.begin() + idx, s.begin() + i + 1);
                    idx = -1; 
                }
            }
        }

        if (idx != -1) {
            reverse(s.begin() + idx, s.end());
        }

        return s;
    }
};
