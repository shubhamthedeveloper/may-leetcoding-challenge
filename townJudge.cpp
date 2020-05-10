class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int n = trust.size();
        if(n==0 && N==1){
            return N;
        }else if(n==0 && N>1){
            return -1;
        }
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[trust[i][0]] -=1;
            mp[trust[i][1]] +=1;            
        }
        
        for(auto x:mp){
            if(x.second == N-1){
                    return x.first;
            }
        }
        return -1;
    }
};