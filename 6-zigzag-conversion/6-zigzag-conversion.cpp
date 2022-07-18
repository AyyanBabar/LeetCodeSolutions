class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        string ret="";
        int i=0;
        int step=1;
        vector<string> v(numRows,"");
        for(auto c:s){
            v[i]=v[i]+c;
            i+=step;
            if(i==numRows || i==-1)
            {
                step*=-1;
                i+=step;
                i+=step;
            }
            
        }
        for(auto l:v){
            ret+=l;
        }
        return ret;
    }
};