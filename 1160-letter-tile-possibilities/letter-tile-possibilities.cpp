class Solution {
public:
    void solve(vector<int> &vec,int &ans){
        for(int i=0 ; i<26 ; i++){
            if(vec[i]>0){
                vec[i]--;
                ans++;
                solve(vec,ans);
                vec[i]++;
            }
        }
    }
    int numTilePossibilities(string tiles) {
        vector<int> vec(26,0);
        for(auto it : tiles) vec[it-'A']++;
        int ans=0;
        solve(vec,ans);
        return ans;     
    }
};