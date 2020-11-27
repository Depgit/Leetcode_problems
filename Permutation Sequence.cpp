class Solution {
public:
    string getPermutation(int n, int k) {
        string s = "";
        string s1;
        for(int i = 1;i<=n;i++){
            s += to_string(i);
        }
        int ans = 1;
        do{
            if(ans++ == k ){
                s1 = s;
                break;
            }
        }while(next_permutation(s.begin(),s.end()));
        return s1;
    }
};
