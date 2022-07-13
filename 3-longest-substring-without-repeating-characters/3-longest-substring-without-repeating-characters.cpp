class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxSize=0;
        string tmp="";
        for(auto i:s){
            int pos;
            if((pos=tmp.find(i))!=string::npos){
                tmp=tmp.substr(pos+1);
                
            }
            tmp+=i;
            if(tmp.length()>maxSize)
                maxSize=tmp.length();
        }
        return maxSize;
    }
};