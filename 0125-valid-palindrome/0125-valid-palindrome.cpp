class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        // usinf two pointers(left and right) to keep moving inward
        while(left < right){
            // to skip non-alphanumeric characters
            if(!isalnum(s[left])) 
                left ++;
            else if(!isalnum(s[right]))
                right --;
            
            //convert to lowercase and check if left is equal to right. if not then return false
            else if(tolower(s[left]) != tolower(s[right]))
                return false;
            
            // moving inward
            else{
                left++;
                right--;
            }
        } return true;
    }
};
// time complexity: O(n) (the loop runs almost n times)
// space complexity: O(1) (we checking the string directly usinf two pinters instead of creating a new filtered string preventing the use of extra memory)