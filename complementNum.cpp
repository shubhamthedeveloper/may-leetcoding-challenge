class Solution {
public:
    int findComplement(int num) {
        int res = 0;
        int power =1;
        
        while(num>0){
        res += (num%2^1) * power;
            power <<= 1;
            num >>= 1;
         }
        return res;
    }
    
};