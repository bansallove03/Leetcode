class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i=0,j=s.size();
        vector<int>a;
        for(auto it:s){
            if(it=='I')a.push_back(i++);
            else a.push_back(j--);
        }
        if(s[s.size()-1]=='I')a.push_back(i);
        else a.push_back(j);
        return a;
    }
};