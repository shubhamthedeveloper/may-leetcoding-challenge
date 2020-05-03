class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.length();
         int m = magazine.length();
        
        if(n == 0 && m == 0)
            return true;
        if(n == 0)
            return true;
        else if(m == 0)
            return false;
        
        vector<int> noteFrequency(26, 0);
         
        for(int i=0;i<m;i++){
            noteFrequency[magazine[i]-'a']++;
        }
        for(int p=0; p<n; p++){
            noteFrequency[ransomNote[p] - 'a']--;
        }
        
        for(int i=0;i<noteFrequency.size();i++){
            if(noteFrequency[i]<0)
                return false;
        }
    
        return true;
            
    }
};