class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int digit;
        vector<int>arr;
        while (x > 0 ){
            digit = x % 10;
            x = x / 10;
            arr.push_back(digit);
        }
        int i = 0, j = arr.size()-1;
        while(i < j){
            if (arr[i] != arr[j]) return false;
            i++,j--;
        }       
        return true;
    }
};