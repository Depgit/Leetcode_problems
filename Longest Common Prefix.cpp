class Solution {
public:
    string commonPrefix(string left , string right){
        int MIN = min(left.length() , right.length());
        for(int i=0;i<MIN;i++){
            if(left[i] != right[i]){
                return left.substr(0,i);
            }
        }
        return left.substr(0,MIN);
    }
    string longestCommonPrefix(vector<string>& s , int l , int r){
        if(l==r){
            return s[l];
        }
        else{
            int mid = (l + r)/2;
            string lcpLeft = longestCommonPrefix(s , l, mid);
            string lcpRight = longestCommonPrefix(s ,mid+1,r);
            return commonPrefix(lcpLeft , lcpRight);
        }
        
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        return longestCommonPrefix(strs, 0, strs.size()-1);
    }
};
