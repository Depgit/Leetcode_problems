class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> output;
        vector<string> curr;
        
        int word_len = 0;
        for(string word : words){
            string w = word;
            if(w.length()+ word_len + curr.size() > maxWidth){
                for(int i=0;i<maxWidth - (word_len);i++){
                    if(curr.size()==1){
                        curr[0] += ' ';
                    }else{
                        curr[i%(curr.size()-1)] += ' ';
                    }
                }
                string temp;
                for(string x : curr) temp += x;
                output.push_back(temp);
                
                curr.clear();
                word_len = 0;
            }
            
            curr.push_back(w);
            word_len += w.length();
        }
        string temp;
        for(string x : curr) temp += x+" ";
        if(temp.size()>maxWidth) temp.pop_back();
        while(temp.size() < maxWidth) temp += " ";
        output.push_back(temp);
        return output;
    }
};
