
class Solution {
public:
    int numJewelsInStones(string J, string S) {
       set<char> jewels;
        int res=0;
        for(auto i : J){
            jewels.insert(i);
        }
        for(auto s : S){
            if(jewels.count(s) > 0)
                res++;
        }
        return res;
    }
};