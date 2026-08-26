class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
    for(auto c : s){
        if(isalnum(c))
            cleaned += tolower(c);
    }
    int start = 0, end = cleaned.size()-1;
while(start < end){
    if(cleaned[start] != cleaned[end]) return false;
    start++;
    end--;
}
return true;
    }
};