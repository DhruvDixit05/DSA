class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        int num = 0;
        
        while (x != 0) {
            int temp = x % 10;
            x = x / 10;
            
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && temp > 7)) {
                return 0;
            }
            if (num < INT_MIN / 10 || (num == INT_MIN / 10 && temp < -8)) {
                return 0;
            }
            
            num = num * 10 + temp;
        }
        if(original < 0) return false;
        if(original == num)return true;
        
        else return false;
    

    }
};